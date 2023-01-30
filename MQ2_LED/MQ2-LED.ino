int LED = 8;
float sensor_gas = A0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  float sensorValue = analogRead(sensor_gas);
  //atribui à variável float o valor lido pelo sensor de gás
  
  if(sensorValue >= 200){
    digitalWrite(LED,HIGH);
    Serial.print(sensorValue); //imprime o valor lido
    Serial.println("Fumaça detectada!"); //imprime no monitor serial a frase
  } else {
    digitalWrite(LED,LOW);
    Serial.println("Sem fumaça!"); //imprime no monitor serial
    Serial.print(sensorValue); //imprime o valor lido
    delay(1000); 
}
}
