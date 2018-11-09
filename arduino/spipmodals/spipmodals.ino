#define PORT 10
#include <SPI.h>
void setup() {
  Serial.begin(9600);
  SPI.begin();
  SPI.setDataMode(SPI_MODE0);//SPI mode 0 ==> polarité horloge cf wikipedia
  SPI.setClockDivider(SPI_CLOCK_DIV16);//diviseur horloge, pmodals prend de 1à4mhz frequence arduino 16MHZ  
                                       //diviseur à 8 pour jouer la sécu mais pas à 16 pour avoir plus de remonté de data
   pinMode(PORT,OUTPUT);
  SPI.setBitOrder(LSBFIRST); 
}
void loop() {
  int receive[2];
  digitalWrite(PORT,LOW);
  receive[0]=SPI.transfer(0);
  receive[1]=SPI.transfer(0);
  digitalWrite(PORT,HIGH);
  int lux=(receive[0]<<3)|(receive[1]>>4); 
  Serial.print("Lum : ");
  Serial.println(lux);
}
