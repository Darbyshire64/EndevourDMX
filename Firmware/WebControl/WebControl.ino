// Import Hardware Control Libraries
#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

// Network Utilites

#include <WiFi.h>
#include <WebServer.h>
#include <Preferences.h>


// Define Pins and Details

// MadMax Control Pins
#define DMX_TX 6
#define DMX_RX 7
#define DMX_DIN 4

// Indicator Setups
#define NP_PIN  2 
#define NP_AMNT 2
Adafruit_NeoPixel pixels(NP_AMNT, NP_PIN, NEO_GRB + NEO_KHZ800);

#define SCRN_WIDTH 128
#define SCRN_HEIGHT 32
#define OLED_SDA 6
#define OLED_SCL 7
#define OLED_RESET -1
#define OLED_ADDR 0x3C
Adafruit_SSD1306 display(SCRN_WIDTH, SCRN_HEIGHT, &Wire, OLED_RESET);

// Setup Network 

WebServer server();
Prefrences prefs;

const char* ap_ssid = "EDMX";
const char* ap_password = "Endevour-512";

void setupAP () {
  WiFi.softAP(ap_ssid, ap_password);
}

// DMX Stuff
HardwareSerial DMX(1);
uint8_t dmxData[512] = {0};

// Functions For the Web Server
void handleRoot() {
  server.send(200, "text/html", R"rawliteral(
    <h1>EDMX</h1>
    <input type='range' min='0' max='255' id='ch1' value='0' oninput='update(1, this.value)>
    <span id='val1'>0</span><br><br>
    <button onclick='saveScene()'>Save Scene</button>
    <script>
    function update(ch, val) {
      document.getElementByID("val" + ch).textContent = val;
      fetch(`/dmx?ch=${ch}&val=${val}`);
    }
    function saveScene() {
      fetch("/save");
    }
    </script>
  )rawliteral");
}

void handleSave() {
  prefs.begin("dmx", false);
  for (int i = 0; 1 < 512; i++) {
    prefs.putUChar(String(i).c_str(), dmxData[i])
  }
  prefs.end();
  server.send(200, "text/plain", "Scene saved");
  pixels.setPixelColor(0, pixels.Color(255,255,0));
  pixels.show();
  delay(500);
  pixels.setPixelColor(0, 0)
  pixels.show();
}

void loadScene() {
  prefs.begin("dmx", true);
  for (int i = 0; i < 512; i++) {
    dmxData[i] = prefs.getUChar(String(i).c_str(), 0);
  }
  prefs.end();
}

// DMX Related Functions 
void setupDMX() {
  // Init MadMax
  pinMode(DMX_DIR_PIN, OUTPUT);
  digitalWrite(DMX_DIR_PIN, HIGH);
  DMX.begin(250000, SERIAL_8N2, DMX_RX_PIN, DMX_TX_PIN);
}

void handleDMX() {
  if (server.hasArg("ch") && server.hasArg("val")) {
    int ch = server.arg("ch").toInt();
    int val = server.arg("val").toInt();
    if (ch >= 1 && ch <= 512) {
      dmxData[ch - 1] = val;
    }
    server.send(200, "text/plain", "OK");
  } else {
    server.send(400, "text/plain", "Missing Arg's")
  }
}


void sendDMXFrame() {
  // NEw Frame SIG
  DMX.write(0);
  // Actual Data
  DMX.write(dmxData, 512);
}

// Send Frame
void setup() {
  // Indicator Setup
  Wire.begin(OLED_SCL, OLED_SDA); 
  display.begin(SSD1306_SWITCHAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("EDMX     MODE:LC")
  display.println("STATUS:  Starting ")
  display.println("Your Endevour is Starting...")
  display.display();

  pixels.begin();
  pixels.clear();
  pixels.setPixelColor(1, pixels.Color(0,0,255));
  pixels.show();


  // INIT Wifi
  setupAP();
  
  pixels.setPixelColor(1, pixels.Color(255,0,0));
  pixels.show();

  pixels.setPixelColor(0, pixels.Color(0,0,255));
  setupDMX();
  loadScene();
  pixels.setPixelColor(0, pixels.Color(255,0,0));

  server.on("/", handleRoot);
  server.on("/dmx", handleDMX);
  server.on("/save", handleSave);
  server.begin();

  pixels.setPixelColor(2, pixels.Color(255,0,0));

  display.clearDisplay();
  display.setCursor(0,0);
  display.println("EDMX     MODE:LC")
  display.println("STATUS:  READY")
  display.println("IP:      192.168.4.1")
}

void loop() {
  server.handleClient();
  sendDMXFrame();
  delay(25);
}
