int hallPin = 14;    //A0 is 14
double hallValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  hallValue = analogRead(hallPin);
  Serial.println(hallValue);
  delay(2000);
}
