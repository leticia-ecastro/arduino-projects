int botao = 8, LED = 7;

void setup() {
  pinMode(botao, INPUT);
  pinMode (LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(botao) == HIGH){
      Serial.println("Botao pressionado");
      digitalWrite(7,HIGH);
  } else {
      Serial.println("Botao nao pressionado"); 
      digitalWrite(7,LOW);
  }
}
