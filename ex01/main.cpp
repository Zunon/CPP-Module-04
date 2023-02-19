//
// Created by Khalifa Almheiri on 19/02/2023.
//
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal *animals[100];
	const Cat primal_cat = Cat();
	const Dog primal_dog = Dog();
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0)
			animals[i] = new Cat(primal_cat);
		else
			animals[i] = new Dog(primal_dog);
	}
	std::cout << "Deep Copy Test:" << std::endl;
	std::cout << "Primal: " << &primal_cat << std::endl;
	std::cout << "Copy: " << animals[0] << std::endl;
	for (int i = 0; i < 100; i++) {
		delete animals[i];
	}
	return (EXIT_SUCCESS);
}