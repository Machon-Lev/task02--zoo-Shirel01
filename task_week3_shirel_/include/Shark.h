#include "Animal.h"
#include<iostream>
#pragma once
class Shark : public Animal {
public:
	Shark(const string& _name, const Location& _location) : Animal(_name, _location) {}// move()}

	//Lion(const std::string n, const Loction l);
 		const char getInitial()  override { return 'S'; } // pq const?
		void step()override;

		void move()override;
		
};