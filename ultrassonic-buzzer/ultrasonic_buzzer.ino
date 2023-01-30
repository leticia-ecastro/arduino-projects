#include <Ultrasonic.h>
#define pino_trigger 4
#define pino_echo 5
int buzzer = 10;
int frequencia = 300;
int tempo = 10;
Ultrasonic ultrasonic(pino_trigger, pino_echo);

void setup() {
Serial.begin(9600);
Serial.println("Lendo dados do sensor ultrassonico...");
pinMode (buzzer,OUTPUT);
}

void loop() {
//Le as informacoes do sensor, em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  Serial.print("Distancia em polegadas: ");
  Serial.println(inMsec);
  delay(1000);
if (cmMsec <= 5){
  tone (buzzer,frequencia,cmMsec);
  delay(10);
}
}