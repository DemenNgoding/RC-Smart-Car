#include "ServoController.h"

ServoController::ServoController(int servoPin)
    : _servoPin(servoPin) {}


void ServoController::begin() {
    if(!myServo.attached()) {  // Cek apakah sudah di-attach
        myServo.attach(_servoPin);

        middle();
    }
}

void ServoController::readArea() {
    middle();
    delay(1000);
    right();
    delay(1000);
    left();
    delay(1000);
    middle();
}

void ServoController::left() {
    myServo.write(30);
}

void ServoController::right() {
    myServo.write(160);
}

void ServoController::middle() {
    myServo.write(90);
}


