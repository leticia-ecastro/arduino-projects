void setup() {
  pinMode(10,OUTPUT); //pino do buzzer
  pinMode(6,OUTPUT); //pino do LED vermelho
  pinMode(5, OUTPUT); //pino do LED azul
}

void loop() {
  digitalWrite(6, HIGH); //acende o LED vermelho
  digitalWrite(5, LOW); //apaga o LED azul
  tone(10, 262, 200); //tone(Pinofalante, frequencia, tempo);
  delay(200); //deixa o buzzer tocando e o LED aceso por 2s
  digitalWrite(6, LOW); //apaga o LED vermelho
  digitalWrite(5, HIGH); //apaga o LED azul
  tone(10, 390, 200); //tone(Pinofalante, frequencia, tempo);
  delay(200);
}
