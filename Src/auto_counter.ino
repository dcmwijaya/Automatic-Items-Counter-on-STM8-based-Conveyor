#include <Arduino.h>

#define ldrPin PA2
#define laserPin PD3

int counter = 0;
int currentState = 0;
int previousState = 0;
int ldrValue;

void setup() {
  Serial_begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(laserPin, OUTPUT);
  digitalWrite(laserPin, HIGH);
}
 
void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial_print_s("\n\nLDR Value\t: ");
  Serial_print_i(ldrValue);
  Serial_print_s("\nTotal items\t: ");

  if(ldrValue <= 721){ currentState = 1; }
  else{ currentState = 0; } 
  delay(1000);

  if(currentState != previousState){
    if(currentState == 1){
      counter = counter + 1;
      Serial_print_i(counter);
    }
  }
  else {
    Serial_print_i(counter);
  }
}
