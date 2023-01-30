void setup() {
  pinMode(5,OUTPUT); //vermelho1
  pinMode(6,OUTPUT); //amarelo1
  pinMode(7,OUTPUT); //verde1
  pinMode(8,OUTPUT); //vermelho2
  pinMode(9,OUTPUT); //amarelo2
  pinMode(10,OUTPUT); //verde2
}

void loop() {    
  digitalWrite(5,LOW);  //apaga o led vermelho (sinal 1)
  digitalWrite(7,HIGH); //acende o led verde (sinal 1)
  digitalWrite(8,HIGH); //acende o led vermelho (sinal 2)
  delay(7000);          //espera 4 segundos
  digitalWrite(7,LOW);  //apaga o led verde (sinal 1)        
   
  digitalWrite(6,HIGH); //acende o led amarelo (sinal 1)
  delay(3000);          //espera 4 segundos
  digitalWrite(6,LOW);  //apaga o led amarelo (sinal 1)
   
  digitalWrite(5,HIGH); //acende o led vermelho (sinal 1)
  digitalWrite(8,LOW);  //apaga o led vermelho (sinal 2)
  digitalWrite(10,HIGH); //acende o led verde (sinal 2)
  delay(7000);          //espera 4 segundos
  digitalWrite(10,LOW); //apaga o led verde (sinal 2)
   
  digitalWrite(9,HIGH); //acende o led amarelo (sinal 2)
  delay(3000);          //espera 2 segundos
  digitalWrite(9,LOW);  //apaga o led amarelo (sinal 2)  
}
