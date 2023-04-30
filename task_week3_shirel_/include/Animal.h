#include <iostream>
#include "Location.h"
#pragma once
using namespace std;
class Animal {

	
protected:
	Location location;
	string name;
	string type;
	bool isMoving = true;
	enum class Direction
	{
		UP = 1,
		DOWN = 2,
		RIGHT = 3,
		LEFT = 4,
		//DL = 5,
		//DR = 6,
		//UL = 7,
		//UR = 8
	};
	Direction direction;
	 //bool stopMove = false;
public:
	Animal(const string& _name, const Location& _location) : name(_name), location(_location) { isMoving = false; }

	//Animal(const string n, const Loction l);
	void printDetails() const; // virtual=0
	virtual const char  getInitial() = 0;
	Location getLocation() const{ return location; }
	virtual void step() = 0;
	void stop() { isMoving=false; }
	virtual void move() = 0;// { isMoving = true; } //randomizeDirection();
	void turnVertically();
	void turnHorizontally();
	//void setLocation(int row, int col) { loction.row = row; loction.col = col; }

};