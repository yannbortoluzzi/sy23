#define PORT 10
void setup() {
  Serial.begin(9600);
  pinMode(PORT,OUTPUT);
  SPI.begin();
  SPI.setDataMode(0);//SPI mode 0 ==> polarité horloge cf wikipedia
  SPI.setClockDivider(SPI_CLOCK_DIV8);//diviseur horloge, pmodals prend de 1à4mhz frequence arduino 16MHZ  
                                       //diviseur à 8 pour jouer la sécu mais pas à 16 pour avoir plus de remonté de data
  SPI.setBitOrder(LSBFIRST); 
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PORT,LOW);
  Serial.print("Lum : ");
  Serial.println(SPI.transfer(0));//normalement pas besoin de registre (d'après la doc pmodals envoie uniquement des data)
  digitalWrite(PORT,HIGH);
}
