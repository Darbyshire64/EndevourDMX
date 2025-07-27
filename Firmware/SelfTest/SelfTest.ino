#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>


// define pins
#define NP_PIN  2 
#define NP_AMNT 2
#define SCRN_WIDTH 128
#define SCRN_HEIGHT 32
#define OLED_SDA 6
#define OLED_SCL 7
#define OLED_RESET -1
#define OLED_ADDR 0x3C

Adafruit_NeoPixel strip(NP_AMNT, NP_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_SSD1306 display(SCRN_WIDTH, SCRN_HEIGHT, &Wire, OLED_REST);

void setup() {
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
}

void loop() {
  display.clearDisplay();
  display.println("Device Ready. Begining Self Test");
  display.display();
  strip.setPixelColor(0, strip.color(0,0,0));
  strip.setPixelColor(0, strip.color(0,0,0));
  strip.setPixelColor(0, strip.color(0,0,0));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP1: Green");
  display.display();
  strip.setPixelColor(0, strip.color(255,0,0));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP1: Red");
  display.display();
  strip.setPixelColor(0, strip.color(0,255,0));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP1: Blue");
  display.display();
  strip.setPixelColor(0, strip.color(0,0,255));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP2: Green");
  display.display();
  strip.setPixelColor(1, strip.color(255,0,0));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP2: Red");
  display.display();
  strip.setPixelColor(1, strip.color(0,255,0));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP2: Blue");
  display.display();
  strip.setPixelColor(1, strip.color(0,0,255));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP3: Green");
  display.display();
  strip.setPixelColor(2, strip.color(255,0,0));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP3: Red");
  display.display();
  strip.setPixelColor(2, strip.color(0,255,0));
  delay(500);
  display.clearDisplay();
  display.println("Testing NP3: Blue");
  display.display();
  strip.setPixelColor(2, strip.color(0,0,255));

  // Test Display
  display.clearDisplay();
  display.display();
  delay(500);
  display.fill(0);
  display.display();
  display.println("TEST COMPLETE");
  display.display();
  delay(500);


}

