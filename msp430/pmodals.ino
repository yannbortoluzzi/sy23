#define PORT 8
#include <SPI.h>
  int receive[2];
void setup() {
  Serial.begin(9600);
  SPI.begin();
  SPI.setDataMode(SPI_MODE0);//SPI mode 0 ==> polarité horloge cf wikipedia
  SPI.setClockDivider(SPI_CLOCK_DIV16);//diviseur horloge, pmodals prend de 1à4mhz frequence arduino 16MHZ  
  pinMode(PORT,OUTPUT); 
}
void loop() {

  digitalWrite(PORT,LOW);
  receive[0]=SPI.transfer(0);
  receive[1]=SPI.transfer(0);
  digitalWrite(PORT,HIGH);
  int lux=(receive[0]<<3)|(receive[1]>>4); //décalage de bit et assemblage des 2 octets 
  Serial.print("Lumiere : ");
  Serial.println(lux);
  delay(1000);
}
