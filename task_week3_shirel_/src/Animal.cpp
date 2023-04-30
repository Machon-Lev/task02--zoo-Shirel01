#include "Animal.h"

void Animal::turnHorizontally()
{
    if (direction == "left") {
        direction = "right";
    }
    else {
        direction = "right";
    }
}
void Animal::turnVertically() {
    if (direction == "up") {
        direction = "down";
    }
    else {
        direction = "up";
    }
}
void Animal::printDetails() const
{
    cout << " Name: " << name << " Type: " << type << "Location: " << location; 
    
}

    //void Animal::randomizeDirection() {
    //    // Generate a random number between 0 and 3
    //    int direction_ = rand() % 4;
    //
    //    // Map the random number to a direction
    //    switch (direction_) {
    //    case 0:
    //        direction = "up";
    //        break;
    //    case 1:
    //        direction = "down";
    //        break;
    //    case 2:
    //        direction = "right";
    //        break;
    //    case 3:
    //        direction = "left";
    //        break;
    //    }
    //}

