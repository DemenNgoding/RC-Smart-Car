#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>

class Buzzer {
public:
    Buzzer(int pin);

    void begin();
    void on();
    void off();
    void delay(int duration);

private:
    int _pin;
    bool _state;

};

#endif
