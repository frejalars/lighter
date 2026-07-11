#ifndef ROOM_H
#define ROOM_H

#include <string>
#include "Light.h"

class Room {

private:
    std::string name;
    Light light;

public:
    Room(std::string name);

    Light& getLight();

    std::string getName() const;
};

#endif
