#include "Controller.h"
#include <iostream>

void Controller::addRoom(const Room& room) {
    rooms.push_back(room);
}

std::vector<Room>& Controller::getRooms() {
    return rooms;
}

void Controller::printStatus() const {

    std::cout << "===== SMART HOME =====\n\n";

    for (const auto& room : rooms) {

        std::cout << room.getName() << "\n";

        std::cout
            << "  State: "
            << (room.getLight().isOn() ? "ON" : "OFF")
            << "\n";

        std::cout
            << "  Brightness: "
            << room.getLight().getBrightness()
            << "%\n\n";
    }

    std::cout << "Connected via Mobile App\n";
}
