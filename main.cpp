#include "Controller.h"

int main() {

    Controller controller;

    controller.addRoom(Room("Living Room"));
    controller.addRoom(Room("Kitchen"));
    controller.addRoom(Room("Bedroom"));

    controller.getRooms()[0].getLight().setBrightness(80);

    controller.getRooms()[2].getLight().setBrightness(40);

    controller.printStatus();

    return 0;
}
