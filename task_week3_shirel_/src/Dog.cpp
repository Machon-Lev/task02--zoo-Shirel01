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
