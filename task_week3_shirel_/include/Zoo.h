#pragma once
#include "Animal.h"
#include<iostream>
#include<vector>
#include "Location.h"
#pragma once
using std::vector;
using std::unique_ptr;
class Zoo
{

private:
	vector<unique_ptr<Animal>> animalsInZoo;
	//std::vector<Animal*> animalsInZoo;
	//vector <Animal*> animalsInZoo;
	void stop(int numberofanimal);////cause to animal to stop and and only a call to move will  cause it to move
    void move(int numberofanimal); // cause to animal to pass to mode movement relevant if was in stop .when start moving rand the direction again
    void create(string type, string name);// create new animal the place is decided randomaly
    void del(int numberofanimal);// del animal, from list
    void delAll(string type);//del all animal from specific type
	void help() const; // return text that explain pekoudot possible and their action
	void step(); // pekouda. titkadem latorb aba bli leshanot shoum davar
	void display(); // display();
public:
	void run();
};

Location randLocation();