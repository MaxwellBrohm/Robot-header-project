#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <iostream>

using namespace std;

class Robot {
public:
    Robot(string robotName);

    void sayHello();

    void move(string direction);

    void dance();

private:
    string name; 
};

#endif
