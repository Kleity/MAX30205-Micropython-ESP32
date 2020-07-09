#include <Wire.h>
#include "Protocentral_MAX30205.h"
MAX30205 tempSensor;

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  tempSensor.begin();   // set continuos mode, active mode
}

void loop() {

  float temp = tempSensor.getTemperature(); // read temperature for every 100ms
  Serial.print(temp ,2);
  Serial.println("'c" );
  delay(2500);
}
