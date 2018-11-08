void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //pas de loop car pas de boucle 
   Serial.print("C'est une chaine\r");
  Serial.println(10);
  Serial.print("\r");
}
