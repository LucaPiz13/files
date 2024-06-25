#pragma once

#include "animal.h"


class Cat: public Animal {
public:
	Cat(std::string name_);

	void print();

private:
	std::string name;
};
