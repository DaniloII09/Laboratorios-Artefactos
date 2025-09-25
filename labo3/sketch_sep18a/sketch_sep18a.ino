int rojo = D0, verde = D3, amarillo = D1;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);

  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, LOW);
}

void loop() {
  digitalWrite(verde, HIGH);
  delay(2000);
  digitalWrite(verde, LOW);

  digitalWrite(amarillo, HIGH);
  delay(1000);
  digitalWrite(amarillo, LOW);

  digitalWrite(rojo, HIGH);
  delay(2000);
  digitalWrite(rojo, LOW);
}
