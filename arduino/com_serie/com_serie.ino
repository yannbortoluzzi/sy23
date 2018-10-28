void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("C'est une chaine");
  Serial.println(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(millis()/1000);
  Serial.print("\r");
}
