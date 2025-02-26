#include <Arduino.h>
#include "Servo/ServoController.h" 

#define SERVO_PIN 18

ServoController servocontroller(SERVO_PIN);

void setup() {
    Serial.begin(9600);
    servocontroller.begin();
    Serial.println("Servo Controller Ready");
}

void loop() {
  servocontroller.readArea();
}