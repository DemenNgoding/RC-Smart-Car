#include "rgbLed.h"

rgbLed::rgbLed(int redPin, int greenPin, int bluePin)  // ✅
    : _redPin(redPin), _greenPin(greenPin), _bluePin(bluePin) {}

void rgbLed::begin() {
    pinMode(_redPin, OUTPUT);
    pinMode(_greenPin, OUTPUT);
    pinMode(_bluePin, OUTPUT);
    off();
}

void rgbLed::setColor(int red, int green, int blue) {
    analogWrite(_redPin, red);
    analogWrite(_greenPin, green);
    analogWrite(_bluePin, blue);
}

void rgbLed::off() {
    setColor(0, 0, 0);
}