#include <LiquidCrystal.h> //inclui a biblioteca do LCD
LiquidCrystal lcd(12,11,7,6,5,4); //configura os pinos do arduino para se comunicarem com o LCD
int PIR = 8; //declara o pino 8 como PIR

void setup() {
  Serial.begin(9600); //inicializa o serial
  lcd.begin(16,2) //inicializa o LCD com dimensões de 16 x 2 (16 colunas x 2 linhas)
  lcd.setCursor(0,0); //posiciona o cursor na posição 0 x 0 (primeira coluna = coluna 0, e primeira linha = linha 0)
  pinMode(PIR,INPUT); //declara o PIR como entrada de dados
}

void loop() {
  int acionamento = digitalRead(PIR); //declara a variável acionamento para ler o PIR
  if (acionamento == HIGH) { //se o PIR detectar presença
    lcd.clear(); //limpa o LCD
    lcd.print("PRESENCA DETECTADA!"); //imprime a mensagem no monitor LCD
    delay(100); //delay de 100 milissegundos
    lcd.display(); //liga o display LCD
    delay(100); //delay de 100 milissegundos
    lcd.clear(); //limpa o LCD
} else {
  lcd.setCursor(1,1); //posiciona o cursor na posição 1 x 1 (coluna 1 e linha 1)
  lcd.print("SEM ALTERACOES!"); //imprime a mensagem no monitor LCD
}
}
