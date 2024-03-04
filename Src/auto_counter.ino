#define ldrPin PD2
#define laserPin PD3

int counter = 0;
int currentState = 0;
int previousState = 0;
int ldr;

void setup() {
  Serial_begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(laserPin, OUTPUT);
  digitalWrite(laserPin, HIGH);
}

void loop() {
  ldr = digitalRead(ldrPin);
  if(ldr == LOW){ currentState = 0; }
  if(ldr == HIGH){ currentState = 1; } 
  Serial_print_s("\nTotal items\t: ");
  if(currentState == 0 && currentState == previousState){ Serial_print_i(counter-1); }
  else{ counter = counter + 1; Serial_print_i(counter-1); }
  delay(1000);
}
