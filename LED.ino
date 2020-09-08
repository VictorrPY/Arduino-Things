int pin = 4 //PUT HERE THE PIN WHERE IS THE LED CONNECTED

void setup() {
  pinMode(pin, OUTPUT); //CONNECT THE LED
}

void loop() {
  digitalWrite(pin, HIGH); //TURN ON THE LED
  delay(1000); //WAIT 1 SECOND, 1000 IN MILLISECONDS
  digitalWrite(pin, LOW); //TURN OFF THE LED
  delay(1000); //WAIT ANOTHER SECOND
}
