#include <iostream>
#include "Animal.h"
#pragma once
class Dog : public Animal {
public:
	Dog(const string& name, const Location& location);
	char const getInitial() override;
	void step() override;
	void move() override;
};