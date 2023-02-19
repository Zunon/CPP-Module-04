//
// Created by Khalifa Almheiri on 19/02/2023.
//
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// Shouldn't compile unless you delete/comment out the next two lines
	const Animal cant;
	std::cout << cant.getType() << std::endl;
	const Animal *tabby = new Cat();
	const Animal *puppy = new Dog();
	puppy->makeSound();
	std::cout << tabby->getType() << std::endl;
	delete tabby;
	delete puppy;
	return (EXIT_SUCCESS);
}