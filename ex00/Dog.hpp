//
// Created by Khalifa Almheiri on 19/02/2023.
//

#ifndef CPP_MODULE_04_DOG_HPP
#define CPP_MODULE_04_DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog: public Animal {
	public:
		Dog();
		Dog(const Dog &);
		~Dog();
		Dog		&operator= (const Dog &);
		void	makeSound (void) const;
};

#endif //CPP_MODULE_04_DOG_HPP
