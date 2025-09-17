#include <Stepper.h>

const int upButtonPin = 3;
const int downButtonPin = 2;

int buttonState = 0;
int speedRpm = 15;
int steps = 2048;
Stepper myStepper(2048, 8, 10, 9, 11);

void setup() {
  // put your setup code here, to run once:
  pinMode(upButtonPin, INPUT);
  pinMode(downButtonPin, INPUT);
  myStepper.setSpeed(speedRpm);  
}

void loop() {
  // put your main code here, to run repeatedly:
    int upPressed = digitalRead(upButtonPin);
    int downPressed = digitalRead(downButtonPin);
    
    if(upPressed == HIGH){
      myStepper.step(1);
    }

    if(downPressed == HIGH){
      myStepper.step(-1);
    }
}
