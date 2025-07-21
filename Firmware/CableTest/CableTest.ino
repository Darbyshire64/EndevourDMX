#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>


// define pins 
#define DMX_TX 6
#define DMX_RX 7
#define DMX_DIN 4
#define NP_PIN  2 
#define NP_AMNT 2
#define SCRN_WIDTH 128
#define SCRN_HEIGHT 32
#define OLED_SDA 6
#define OLED_SCL 7
#define OLED_RESET -1
#define OLED_ADDR 0x3C


// Global

Adafruit_NeoPixel strip(NP_AMNT, NP_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_SSD1306 display(SCN_WIDTH, SCRN_HEIGHT, &Wire, OLED_RESET);

// helper script

void setPixel(int index, uint32_t color) {
  strip.setPixelColor(index, color);
  strip.show();
}

//Remder text to Display
void showMessage(string line1, string line2 = "") {
  display.clearDisplay();
  display.setCursor(0,0);
  display.setTextSize(1);
  display.SetTextColor(SSD1306_WHITE);
  display.println("EndevourDMX - CT Mode");
  display.println(line1);
  if (line2.length() > 0) display.println(line2);
  display.display();
}

// Put Max Into TX Mode
void setTransmitMode() {
  digitalWrite(DMX_DIR, HIGH);
}

// Put Max Into RX Mode
void setTransmitMode() {
  digitalWrite(DMX_DIR, LOW);
}

void setup() {
  //DMX Setup
  pinMode(DMX_DIR, OUTPUT);
  setTransmit();

  // INT NP
  strip.begin();
  strip.clear();
  strip.show();
  strip.setPixelColor(0, strip.color(0,0,255));
  strip.setPixelColor(1, strip.color(0,0,255));
  strip.setPixelColor(2, strip.color(0,0,255));

  // INT OLED
  Wire.begin():
  display.begin(SSD1306_SWITCHAPVCC, OLED_ADDR);
  display.display();
  delay(1000);
  display.clearDisplay();
  display.display();

  //UART
  Serial1.begin(250000, SERIAL_8N, DMX_RX, DMX_TX);
  showMessage("Waiting for test...");
  delay(500);
}

// Test Loop
void loop() {
  strip.setPixelColor(0, strip.color(255,255,255));
  strip.setPixelColor(1, strip.color(0,0,0));
  strip.setPixelColor(2, strip.color(0,0,0));

  showMessage("Cable...");

  //Transmit Byte
  setTransmit();
  delayMicroseconds(50);
  Serial1.write(0);
  Serial1.write(123);
  Serial1.flush();
  delay(5);

  //Recive
  setRecive();
  delay(5);

  bool success = false;
  int b1 = -1, b2 = -1

  if (Serial1.available() >= 2) {
    b1 = Serial1.read();
    b2 = Serial1.read();
    if (b2 == 123) success = true;
  }

  if (success) {
    setPixel(0, strip.Color(255,0,0));
    showMessage("Cable... OK")
  } else {
    setPixel(0, strip.Color(0,255,0));
    showMessage("Cable... BROKEN")
  }
  delay(1500)
}