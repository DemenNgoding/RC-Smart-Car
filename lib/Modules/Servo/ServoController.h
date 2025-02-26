#ifndef SERVO_CONTROLLER_H
#define SERVO_CONTROLLER_H

#include <Arduino.h>
#include <ESP32Servo.h>

class ServoController {
public:
    ServoController(int servoPin);
    void begin();
    void readArea();
    void left();
    void right();
    void middle();
    
private:
    int _servoPin;
    Servo myServo;
};

#endif