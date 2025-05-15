#include "Robot.h"

int main() {
    Robot robo("Robo");

    robo.sayHello();

    robo.move("forward");
    robo.move("backward");

    robo.dance();

    return 0;
}
