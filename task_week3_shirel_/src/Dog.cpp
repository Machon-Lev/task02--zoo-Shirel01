#include "Dog.h"
#pragma once

Dog::Dog(const string& name, const Location& location): Animal(name, location)
{
	move();
}
const char Dog::getInitial() 
{
	return 'D';
}
void Dog::step()
{
    if (!isMoving)
        return;
    else {
        if (direction == Direction::RIGHT) {
            if (location.column + 2 > 40) {  // 40is board size column
                // if reached right edge, turn around
                turnHorizontally();
            }
            else {
                location.column += 2;
            }

        }

        else {//(direction == "left") 
            if (location.column - 2 < 1) {
                // if reached left edge, turn around
                turnHorizontally();
            }
            else {
                location.column -= 2;
            }
        }

    }


}



void Dog::move()// CH   ANGE TS OF LION
{

    if (isMoving)
        return;

    direction = (Direction)(3 + (rand() % 2));
    isMoving = true;
}
//void Dog::step()
//{
//	if (!isMoving)
//	// to dooo
//
//
//
//}
//void Dog::move()
//{
//    if (isMoving)
//        return;
//
//    if (rand() % 2 == 0)
//        direction = Location(0, rand() % 2 ? -1 : 1);
//    else
//        direction = Location(rand() % 2 ? -1 : 1, 0);
//
//    isMoving = true;
//}

void Dog::turnHorizontally() {
    if (direction == Direction::LEFT) {
        direction = Direction::RIGHT;
    }
    else {
        direction = Direction::LEFT;
    }
}