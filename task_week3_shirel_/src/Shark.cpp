#include "Shark.h"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#pragma once
void Shark::step() {
    isMoving = true;
}// TO DO erase this line}
//    if (!isMoving()) {
//        return;
//    }
//    else {
//        // Generate a random direction
//        int randomDirection = rand() % 8;
//
//        // Define the possible movements in all directions
//        int dx[] = { 1, 1, 0, -1, -1, -1, 0, 1 };
//        int dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//
//        // Calculate the new location based on the random direction
//        int newX = getLocation().column + (5 * dx[randomDirection]);
//        int newY = getLocation().row + (5 * dy[randomDirection]);
//
//        // Check if the new location is within the board bounds
//        if (newX < 1 || newX > getBoardSize() || newY < 1 || newY > getBoardSize()) {
//            // If out of bounds, do not move
//            return;
//        }
//        else {
//            // Update the location to the new position
//            getLocation().column = newX;
//            getLocation().row = newY;
//        }
//    }
//}


void Shark::move()
{
    if (isMoving)
        return;

    else
    {
        direction = Direction((rand() % 3) - 1);// CHANGE THIS, (rand() % 3) - 1);

    }
    // case the random direction is to not move
    //while (direction.row==0  && direction.column == 0);

    isMoving = true;
}
