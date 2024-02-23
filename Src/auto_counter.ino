#include <Arduino.h>

#define ldrPin PA2
#define laserPin PD3

int counter = 0;
int currentState = 0;
int previousState = 0;
int ldrStatus;

void setup() {
  Serial_begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(laserPin, OUTPUT);
  digitalWrite(laserPin, HIGH);
}
 
void loop() {
  int ldrStatus = analogRead(ldrPin);

  if(ldrStatus <= 700){ currentState = 1; }
  else{ currentState = 0; } 
  delay(200);

  if(currentState != previousState){
    if(currentState == 1){
      counter = counter + 1;
      Serial_print_s("Hitung Barang yang lewat: ");
      Serial_print_s(counter);
      Serial_print_s("\n");
    }
  }
}
