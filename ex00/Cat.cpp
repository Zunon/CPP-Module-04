//
// Created by Khalifa Almheiri on 19/02/2023.
//

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "You hear some meowing in the vicinity!" << std::endl;
}

Cat::Cat(const Cat &cat) {
	type = cat.type;
	std::cout << "You hear some horrific meowing sounds!" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	if (this != &cat)
		type = cat.type;
	std::cout << "You hear some horrific cat sounds!" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "You hear some meowing sounds fade away..." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}