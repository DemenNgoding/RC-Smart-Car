#ifndef RGBLED_H
#define RGBLED_H

#include <Arduino.h>

class rgbLed {
public:
    rgbLed(int redPin, int greenPin, int bluePin);
    void begin();
    void setColor(int red, int green, int blue);
    void off();

private:
    int _redPin;
    int _greenPin;
    int _bluePin;
};

#endif // RGBLED_H  