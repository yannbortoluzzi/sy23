#define PORT 10
#include <SPI.h>
void setup() {
  Serial.begin(9600);
  pinMode(PORT,OUTPUT);
  SPI.begin();
  SPI.setDataMode(0);//SPI mode 0 ==> polarité horloge cf wikipedia
  SPI.setClockDivider(SPI_CLOCK_DIV8);//diviseur horloge, pmodals prend de 1à4mhz frequence arduino 16MHZ  																		//diviseur à 8 pour jouer la sécu mais pas à 16 pour avoir plus de remonté de data
  SPI.setBitOrder(LSBFIRST); 
}

void loop() {
   // put your main code here, to run repeatedly:
  digitalWrite(PORT,LOW);
  SPI.transfer(0x28);
  int valeur0 = SPI.transfer(0);
  Serial.print("v0 = ");
  Serial.println(valeur0);
  SPI.transfer(0x29);
  int valeur1 = SPI.transfer(0);
  Serial.print("v1 = ");
  Serial.println(valeur1);
  SPI.transfer(0x2A);
  int valeur2 = SPI.transfer(0);
  Serial.print("v2 = ");
  Serial.println(valeur2);
  
  digitalWrite(PORT,HIGH);
  int val = word(word(valeur0, valeur1),valeur2);
  int pression = val/4096;
  Serial.println(pression);
}
