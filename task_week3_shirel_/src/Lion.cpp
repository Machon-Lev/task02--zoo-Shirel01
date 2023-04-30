# include "Lion.h"
#pragma once
void Lion::step()
{
	if (! isMoving)
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

//string Lion::generateDirection() {
//    int direction_ = rand() % 2; // generate a random number between 0 and 1
//    switch (direction_) {
//    case 0:
//        direction = "right";
//        // move up
//        break;
//    case 1:
//        direction = "left";
//        // move down
//        break;
//        
//    }
//    return direction;
//}


void Lion::move()
{

    if (isMoving)
        return;

    direction = (Direction)(3 + (rand() % 2));
    isMoving = true;
}