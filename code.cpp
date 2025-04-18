#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Define custom I2C pins for ESP32
#define OLED_SDA 2  // GPIO2 (D2)
#define OLED_SCL 1  // GPIO1 (D1) - risky, it's also TX

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  // Start I2C on custom pins
  Wire.begin(OLED_SDA, OLED_SCL);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    while (true); // Freeze here if OLED fails
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 20);
  display.println("Hello,");
  display.setCursor(0, 40);
  display.println("ESP32!");

  display.display();
}

void loop() {
  // Nothing here unless you want animations or updates
}