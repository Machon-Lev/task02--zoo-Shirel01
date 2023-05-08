#include<iostream>
#pragma once
struct Location {
	int row;
	int column;

	//constructors
	Location() : row(0), column(0){}
	Location(int row_, int column_):row(row_),column(column_){}

	// operators - as member
	friend std::ostream& operator<<(std::ostream&, const Location&);
	bool operator==(const Location&) const;
	bool operator!=(const Location&) const;
	Location& operator+=(const Location& other);
	Location& operator+(const Location& other);
	Location& operator=(const Location&); 

	
};

