#include "Shark.h"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#pragma once
void Shark::step() {

    // Generate a random direction
    int randomDirection = rand() % 8; // Generate a random number between 0 and 7

    // Map the random number to a specific direction
    switch (randomDirection)
    {
    case 0:
        direction = Direction::UP;
        break;
    case 1:
        direction = Direction::DOWN;
        break;
    case 2:
        direction = Direction::LEFT;
        break;
    case 3:
        direction = Direction::RIGHT;
        break;
    case 4:
        direction = Direction::UP_LEFT;
        break;
    case 5:
        direction = Direction::UP_RIGHT;
        break;
    case 6:
        direction = Direction::DOWN_LEFT;
        break;
    case 7:
        direction = Direction::DOWN_RIGHT;
        break;
    }

    // Move in the selected direction for 5 cells
    for (size_t i = 0; i < 5; i++)
    {
        // Check if the shark reaches the board's boundaries
        if (location.row <= 0 || location.row >= ROWS - 1 || location.column <= 0 || location.column >= COLUMNS - 1)
        {
            // Turn around if the boundaries are reached
            switch (direction)
            {
            case Direction::UP:
                direction = Direction::DOWN;
                break;
            case Direction::DOWN:
                direction = Direction::UP;
                break;
            case Direction::LEFT:
                direction = Direction::RIGHT;
                break;
            case Direction::RIGHT:
                direction = Direction::LEFT;
                break;
            case Direction::UP_LEFT:
                direction = Direction::DOWN_RIGHT;
                break;
            case Direction::UP_RIGHT:
                direction = Direction::DOWN_LEFT;
                break;
            case Direction::DOWN_LEFT:
                direction = Direction::UP_RIGHT;
                break;
            case Direction::DOWN_RIGHT:
                direction = Direction::UP_LEFT;
                break;
            }
        }

        // Move to the next cell in the selected direction
        switch (direction)
        {
        case Direction::UP:
            location.row--;
            break;
        case Direction::DOWN:
            location.row++;
            break;
        case Direction::LEFT:
            location.column--;
            break;
        case Direction::RIGHT:
            location.column++;
            break;
        case Direction::UP_LEFT:
            location.row--;
            location.column--;
            break;
        case Direction::UP_RIGHT:
            location.row--;
            location.column++;
            break;
        case Direction::DOWN_LEFT:
            location.row++;
            location.column--;
            break;
        case Direction::DOWN_RIGHT:
            location.row++;
            location.column++;
            break;
        }
    }


    isMoving = true;
}
// TO DO erase this line}
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
//
void Shark::move()
{
    if (isMoving)
        return;

}

