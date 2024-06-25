#include "cat.h"

Cat::Cat(std::string name_) {
	name = name_;
}

void Cat::print() {
	std::cout << name << ": Miao" << std::endl;
}

