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
	// Magnétomètre
	digitalWrite(PORT,LOW);
	Serial.print("Magnetisme : ");
	SPI.transfer(0x2A);
	Serial.println(SPI.transfer(0));

	Serial.print("Vitesse : ");
	SPI.transfer(0x18);
	Serial.println(SPI.transfer(0));

	Serial.print("Angulaire : ");
	SPI.transfer(0x1A);
	Serial.println(SPI.transfer(0));

	// Altimètre
	Serial.print("Pression : ");
	SPI.transfer(0x28);
	Serial.println(SPI.transfer(0));

	Serial.print("Température : ");
	SPI.transfer(0x2B);
	Serial.println(SPI.transfer(0));

digitalWrite(PORT,HIGH);