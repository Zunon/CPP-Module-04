//
// Created by Khalifa Almheiri on 19/02/2023.
//

#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	type = animal.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal) {
	if (this != &animal)
		type = animal.type;
	std::cout << "Animal assignation operator called" << std::endl;
	return *this;
}

void	Animal::makeSound() const {
	std::cout << "<grotesque faintly beast-like sound>" << std::endl;
}

std::string	Animal::getType() const {
	return type;
}