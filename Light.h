#ifndef LIGHT_H
#define LIGHT_H

#include <string>

class Light {

private:
    bool enabled;
    int brightness;

public:
    Light();

    void turnOn();
    void turnOff();
    void setBrightness(int value);

    bool isOn() const;
    int getBrightness() const;
};

#endif
