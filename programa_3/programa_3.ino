byte ledPin[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
 
int ledDelay = 300 ;
 
int direccion = 1;
 
int LEDActual = 5;
 
unsigned long TiempoCambio;
 
 
 
void setup() {
 
 for(int x=0; x<10 ; x++){
 
  pinMode(ledPin[x], OUTPUT);
 
 }
 
 TiempoCambio = millis();
 
}
 
 
 
void loop() {
 
 if ((millis() - TiempoCambio) > ledDelay){
 
  cambioLED();
 
  TiempoCambio = millis();
 
 }
 
}
 
 
 
void cambioLED() {
 
  for(int x=0; x<10 ; x++){
 
    digitalWrite(ledPin[x],LOW);
 
  }
 
  digitalWrite(ledPin[LEDActual],HIGH);
 
  LEDActual += direccion;
 
  if (LEDActual == 9) {
 
    direccion = -1;
 
  }
 
  if (LEDActual == 0) {
 
    direccion = 1;
 
  }
 
}
