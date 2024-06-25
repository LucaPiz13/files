#include "animal.h"
#include "dog.h"
#include "cat.h"


void test01(int argc, char* argv[]) {
	bool cond1 = false;
 	if (argc > 1) {
 		if (std::string(argv[1]) == "dog")  {
 			cond1 = true;
 		}
 		else { 
 			cond1 = false;
 		}
 	}

 	Animal* animal;
 	if (cond1) {
 		animal = new Dog("Dog");
 	}
 	else {
 		animal = new Cat("Cat");
 	}
 	animal->print();
}




int main(int argc, char* argv[]) {
	test01(argc, argv); 
	return 0;
}