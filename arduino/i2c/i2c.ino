#include <Wire.h>
#include <SoftwareSerial.h>
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
int send(int adress){
  Wire.beginTransmission(0x40);
  Wire.write(adress);
  Wire.endTransmission();
  Wire.requestFrom(0x40,2);
  return 0;
}
void loop() {
 send(0x00);
  if(Wire.available()){
    Serial.println("Temperature");
    Serial.println(Wire.read()/pow(2,16)*165-40);
    Serial.println("°C\r");
  }
  send(0X01);
  if(Wire.available()){
    Serial.println("Humidite");
    Serial.println(Wire.read()/pow(2,16)*100);
    Serial.println("%\r");
  }
}
