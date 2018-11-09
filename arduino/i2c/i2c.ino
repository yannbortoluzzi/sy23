#include <Wire.h>
void setup() {
  // put your setup code here, to run once:
  Wire.begin(0x40);
  Serial.begin(9600);
}

int initi(){
  Serial.println("test2");
  Wire.beginTransmission(0x40);
  Wire.write(0x02);
  Wire.write(0x00);
  Wire.endTransmission();
  Serial.println("test1");
  return 0;
}
int send(int adress){
  Wire.beginTransmission(0x40);
  Wire.write(adress);
  Wire.endTransmission();
  Serial.println("test");
  delay(13);
  Wire.requestFrom(0x40,2);
  Serial.println("test");
  return 0;
}
void loop() {
  initi();
  send(0x00);
  Serial.println("test");
  if(Wire.available()==2){
    Serial.print("Temperature : ");
    Serial.print(Wire.read());
    Serial.println("  °C");
  }
}
