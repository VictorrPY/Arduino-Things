int pin1 = 3; //PUT HERE THE PIN WHERE THE LED CONNECTED
int pin2 = 4; //PUT HERE THE PIN WHERE THE LED CONNECTED
int pin3 = 5; //PUT HERE THE PIN WHERE THE LED CONNECTED

//EXAMPLE PIC https://i.imgur.com/4s46atv.png

void setup() {
  pinMode(pin1, OUTPUT); //CONNECT THE LED
  pinMode(pin2, OUTPUT); //CONNECT THE LED
  pinmode(pin3, OUTPUT); //CONNECT THE LED
}

void loop() {
  analogWrite(pin1, 0); //TURN ON THE LED WITH COLOR 0
  analogWrite(pin2, 255); //TURN ON THE LED WITH COLOR 255
  analogWrite(pin3, 0); //TURN ON THE LED WITH COLOR 0
  delay(1000); //WAIT 1 SECOND
  analogWrite(pin1, 255); //TURN ON THE LED WITH COLOR 255
  analogWrite(pin2, 255); //TURN ON THE LED WITH COLOR 255
  analogWrite(pin3, 255); //TURN ON THE LED WITH COLOR 255
  delay(1000); //WAIT ANOTHER SECOND
}
