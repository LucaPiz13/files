#pragma once

#include "animal.h"


class Dog: public Animal {
public:
	Dog(std::string name_);
	
	void print();

private:
	std::string name;
};