void setup() {
  Serial.begin(9600);
  // initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH); //LED da placa e LED RGB
  delay(1000);           // wait for a second
  digitalWrite(2, LOW);

  digitalWrite(14, HIGH);
  delay(1000);
  digitalWrite(14, LOW);

  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);

  delay(1000);            // wait for a second
}
