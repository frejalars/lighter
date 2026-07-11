#include "Room.h"

Room::Room(std::string name)
    : name(name) {}

Light& Room::getLight() {
    return light;
}

std::string Room::getName() const {
    return name;
}
