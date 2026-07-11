#include "Light.h"
#include "Settings.h"

Light::Light() {
    enabled = false;
    brightness = 0;
}

void Light::turnOn() {
    enabled = true;

    if (brightness == 0)
        brightness = DEFAULT_BRIGHTNESS;
}

void Light::turnOff() {
    enabled = false;
    brightness = 0;
}

void Light::setBrightness(int value) {

    if (value < 0)
        value = 0;

    if (value > MAX_BRIGHTNESS)
        value = MAX_BRIGHTNESS;

    brightness = value;

    enabled = brightness > 0;
}

bool Light::isOn() const {
    return enabled;
}

int Light::getBrightness() const {
    return brightness;
}
