#include "Location.h"
#pragma once 
Location& Location::operator+(const Location& other) 
{
    Location location;
    location.row = this->row + other.row;
    location.column = this->column + other.column;
    return location;
}


Location& Location::operator+=(const Location& other)
{
    this->row += other.row;
    this->column += other.column;
    return *this;
}


bool Location::operator==(const Location& other) const
{
    return (this->row == other.row) && (this->column == other.column);
}

bool Location::operator!=(const Location& other) const
{
    return !(*this == other);

}

std::ostream& operator<<(std::ostream& os, const Location& loc)
{
	os << "(" << loc.column << ", " << loc.row << ")";
	return os;
	
}

//


Location& Location::operator=(const Location& other)
{
    if (this != &other) {
        row = other.row;
        column = other.column;
    }
    return *this;
    
}



