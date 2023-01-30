int botao = 8, LED = 7;
bool ligado = true;

void setup() {
  pinMode(botao, INPUT);
  pinMode (LED, OUTPUT);
}

void loop() {
  int estado = digitalRead(botao); 
  if(estado == HIGH){
      if (ligado == true){
        digitalWrite(LED,HIGH);
        ligado = false;
        delay(200);
      } else {
        digitalWrite(LED,LOW);
        ligado = true;
        delay(200);
      }
  }
}
