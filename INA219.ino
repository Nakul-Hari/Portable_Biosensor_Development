#include <Wire.h>
#include <Adafruit_INA219.h>
#include <LiquidCrystal.h>
 
Adafruit_INA219 ina219;
 
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

 
void setup(void) 
{
  Serial.begin(115200);
  lcd.begin(16, 2);
  lcd.print("Current(mA)");
  // while (!Serial) {
  //     // will pause Zero, Leonardo, etc until serial console opens
  //     delay(1);
  //}
 
  uint32_t currentFrequency;
    
  //Serial.println("Hello!");
  
  // Initialize the INA219.
  // By default the initialization will use the largest range (32V, 2A).  However
  // you can call a setCalibration function to change this range (see comments).
  if (! ina219.begin()) {
  //  Serial.println("Failed to find INA219 chip");
      lcd.print("Failed to find INA219 chip");
    while (1) { delay(10); }
  }
  // To use a slightly lower 32V, 1A range (higher precision on amps):
  //ina219.setCalibration_32V_1A();
  // Or to use a lower 16V, 400mA range (higher precision on volts and amps):
  //ina219.setCalibration_16V_400mA();
 
  //Serial.println("Measuring voltage and current with INA219 ...");
}
 
void loop(void) 
{
  // float shuntvoltage = 0;
  // float busvoltage = 0;
  float current_mA = 0;
  // float loadvoltage = 0;
  // float power_mW = 0;
 
  // shuntvoltage = ina219.getShuntVoltage_mV();
  // busvoltage = ina219.getBusVoltage_V();
  current_mA = ina219.getCurrent_mA();
  // power_mW = ina219.getPower_mW();
  // loadvoltage = busvoltage + (shuntvoltage / 1000);
  
  // Serial.println("Bus Voltage:   "); 
  // Serial.println(busvoltage); 
  // Serial.println(" V");
  // Serial.println("Shunt Voltage: "); 
  // Serial.println(shuntvoltage); 
  // Serial.println(" mV");
  // Serial.println("Load Voltage:  "); 
  // Serial.print(loadvoltage); 
  // Serial.println(" V");
  lcd.print("Current:       "); 
  lcd.print(current_mA); lcd.println(" mA");
  // Serial.print("Power:         "); Serial.print(power_mW); Serial.println(" mW");
  // Serial.println("");
 
  // turn off automatic scrolling
  lcd.noAutoscroll();

  // clear screen for the next loop:
  lcd.clear();
  delay(500);
}
