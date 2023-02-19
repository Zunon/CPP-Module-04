//
// Created by Khalifa Almheiri on 19/02/2023.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "WrongAnimal";
	std::cout << "WrongAnimal Constructor Called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	type = wrongAnimal.type;
	std::cout << "WrongAnimal Copy Constructor Called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor Called!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	if (this != &wrongAnimal)
		type = wrongAnimal.type;
	std::cout << "WrongAnimal Assignation Operator Called!" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal Sound!" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return type;
}