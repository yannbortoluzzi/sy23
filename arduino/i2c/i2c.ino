#include <Wire.h>
void setup() {
  // put your setup code here, to run once:
  Wire.beginTransmission(0x40);
  Wire.write(0x02);
  Wire.write(0x00);
  Wire.endTransmission();
  Serial.begin(9600);
}

int send(int adress){
  Wire.beginTransmission(0x40);
  Wire.write(adress);
  Wire.endTransmission();
  delay(13);
  Wire.requestFrom(0x40,2);
  return 0;
}
void loop() {
  send(0x00);
  if(Wire.available()==2){
    Serial.println("Temperature");
    Serial.println(Wire.read()/pow(2,16)*165-40);
    Serial.println("°C\r");
  }
}
