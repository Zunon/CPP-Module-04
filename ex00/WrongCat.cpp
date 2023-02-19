//
// Created by Khalifa Almheiri on 19/02/2023.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "Cat";
	std::cout << "You hear some meowing in the vicinity!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) {
	type = cat.type;
	std::cout << "You hear some horrific meowing sounds!" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &cat) {
	if (this != &cat)
		type = cat.type;
	std::cout << "You hear some horrific cat sounds!" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "You hear some meowing sounds fade away..." << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}