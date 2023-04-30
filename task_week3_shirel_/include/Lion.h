#include "Animal.h"
#pragma once
class Lion : public Animal {
private:
	/*void doingMove(int step_to_move);
	bool checkRow(int row);
	bool checkCol(int col);*/
public:
	Lion(const string& _name, const Location& _location) : Animal(_name, _location) {}// move()}

	//Lion(const std::string n, const Loction l);
		char const getInitial()  override { return 'L'; } // pq const?
	void step()override;
	
	void move()override; // to implement
	//string generateDirection();

};