int LED = 7;

void setup() {
  Serial.begin(9600);
  pinMode (7,OUTPUT);
}

void loop() {
  int valor = analogRead(A0);
  Serial.print("Luz: ");
  Serial.print(valor);
  Serial.print("\n");

  if (valor <= 100) {
  digitalWrite(7, HIGH);
  delay(100);
  } else {
  digitalWrite(7, LOW);
  }
}
