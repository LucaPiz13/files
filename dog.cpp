#include "dog.h"

Dog::Dog(std::string name_) {
	name = name_;
}

void Dog::print() {
	std::cout << name << ": Bau" << std::endl;
}