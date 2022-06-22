#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x3F for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define REPORTING_PERIOD_MS     1000

float BPM, SpO2;

PulseOximeter pox;
uint32_t tsLastReport = 0;

void setup() {
  Serial.begin(9600);
  pinMode(16, OUTPUT);
  delay(100);
  
  Serial.print("Initializing pulse oximeter..");
  lcd.print("Initializing pulse oximeter..");

  if (!pox.begin()) {
    Serial.println("FAILED");
    lcd.println("FAILED");
    for (;;);
  } else {
    Serial.println("SUCCESS");
    lcd.println("SUCCESS");
  }
}
void loop() {
  lcd.println("hello");
  delay(1000);
  pox.update();
  if (millis() - tsLastReport > REPORTING_PERIOD_MS) {

    BPM = pox.getHeartRate();
    SpO2 = pox.getSpO2();

    Serial.print("BPM: ");
    Serial.println(BPM);

    Serial.print("SpO2: ");
    Serial.print(SpO2);
    Serial.println("%");

      //lcd print
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BPM: ");
      lcd.print(BPM);
      
      lcd.setCursor(0,1);
      lcd.print("SpO2: ");
      lcd.print(SpO2);
      lcd.print("%");

    Serial.println("*********************************");
    Serial.println();
    tsLastReport = millis();
  }


}
