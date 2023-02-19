//
// Created by Khalifa Almheiri on 19/02/2023.
//
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const WrongAnimal *i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return (EXIT_SUCCESS);
}