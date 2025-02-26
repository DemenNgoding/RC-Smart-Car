#include "Buzzer.h"

Buzzer::Buzzer(int buzPin) : _pin(buzPin), _state(false) {}

void Buzzer::begin() {
    digitalWrite(_pin, OUTPUT);
    off();
}

void Buzzer::on() {
    digitalWrite(_pin, HIGH);
    _state = true;
}

void Buzzer::off() {
    digitalWrite(_pin, LOW);
    _state = false;
}

void Buzzer::delay(int time) {
    on();
    delay(time);
    off();
}
