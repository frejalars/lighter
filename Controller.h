#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <vector>
#include "Room.h"

class Controller {

private:
    std::vector<Room> rooms;

public:
    void addRoom(const Room& room);

    void printStatus() const;

    std::vector<Room>& getRooms();
};

#endif
