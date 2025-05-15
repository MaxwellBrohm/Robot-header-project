#include "Robot.h"

Robot::Robot(string robotName) : name(robotName) {}

void Robot::sayHello() {
    cout << "Hello, I am " << name << " the robot!" << endl;
}

void Robot::move(string direction) {
    cout << name << " is moving " << direction << "." << endl;
}

void Robot::dance() {
    cout << name << " is doing the robot dance! 🕺🤖" << endl;
}
