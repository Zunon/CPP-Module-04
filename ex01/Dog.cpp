//
// Created by Khalifa Almheiri on 19/02/2023.
//

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "You hear some barking in the vicinity!" << std::endl;
}

Dog::Dog(const Dog &dog) {
	type = dog.type;
	brain = new Brain(*dog.brain);
	std::cout << "You hear some horrific barking sounds!" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		type = dog.type;
		brain = new Brain(*dog.brain);
	}
	std::cout << "You hear some horrific dog sounds!" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "You hear some barking sounds fade away..." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}