void setup() {
  pinMode(5,OUTPUT); //vermelho1
  pinMode(6,OUTPUT); //amarelo1
  pinMode(7,OUTPUT); //verde1
  pinMode(8,OUTPUT); //vermelho2
  pinMode(9,OUTPUT); //amarelo2
  pinMode(10,OUTPUT); //verde2
  pinMode(11,OUTPUT); //vermelho3
  pinMode(12,OUTPUT); //amarelo3
  pinMode(13,OUTPUT); //verde3
}

void loop() {    
  digitalWrite(5,LOW);  //apaga o led vermelho (sinal 1)
  digitalWrite(11,LOW);  //apaga o led vermelho (sinal 3)
  digitalWrite(7,HIGH); //acende o led verde (sinal 1)
  digitalWrite(13,HIGH); //acende o led verde (sinal 3)
  digitalWrite(8,HIGH); //acende o led vermelho (sinal 2)
  delay(7000);          //espera 4 segundos
  digitalWrite(7,LOW);  //apaga o led verde (sinal 1)  
  digitalWrite(13,LOW);  //apaga o led verde (sinal 3)       
   
  digitalWrite(6,HIGH); //acende o led amarelo (sinal 1)
  digitalWrite(12,HIGH); //acende o led amarelo (sinal 3)
  delay(3000);          //espera 4 segundos
  digitalWrite(6,LOW);  //apaga o led amarelo (sinal 1)
  digitalWrite(12,LOW);  //apaga o led amarelo (sinal 3)
   
  digitalWrite(5,HIGH); //acende o led vermelho (sinal 1)
  digitalWrite(11,HIGH); //acende o led vermelho (sinal 3)
  digitalWrite(8,LOW);  //apaga o led vermelho (sinal 2)
  digitalWrite(10,HIGH); //acende o led verde (sinal 2)
  delay(7000);          //espera 4 segundos
  digitalWrite(10,LOW); //apaga o led verde (sinal 2)
   
  digitalWrite(9,HIGH); //acende o led amarelo (sinal 2)
  delay(3000);          //espera 2 segundos
  digitalWrite(9,LOW);  //apaga o led amarelo (sinal 2)  
}
