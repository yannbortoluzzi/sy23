#include <Wire.h>
void setup() {
  // put your setup code here, to run once:
  Wire.begin(0x40);
  Serial.begin(9600);
  delay(15);
   Wire.beginTransmission(0x40);
  Wire.write(0x02);
  Wire.write(0x00);
   Wire.write(0x00);
  Wire.endTransmission();
}

int send(int adress){
  Wire.beginTransmission(0x40);
  Wire.write(adress);
  Wire.endTransmission();
  delay(13);
  Wire.requestFrom(0x40,2);
  return 0;
}
unsigned int read(){
    int wire1=Wire.read();
    int wire2=Wire.read();
    return(wire1 << 8 | wire2);
}
void loop() {

  send(0x00);
  if(Wire.available()==2){
    Serial.print("Temperature : ");
    Serial.print((read()/65536.00)*165.00-40.00); 
    Serial.println(" C");
  }
 send(0x01);
  if(Wire.available()==2){
    Serial.print("Humidite : ");
    Serial.print((read()/65536.00)*100); 
    Serial.println(" %");
  }
    delay(1000);
}
