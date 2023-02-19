//
// Created by Khalifa Almheiri on 19/02/2023.
//

#ifndef CPP_MODULE_04_DOG_HPP
#define CPP_MODULE_04_DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal {
		Brain	*brain;
	public:
		Dog (void);
		Dog (const Dog &);
		~Dog (void);
		Dog		&operator= (const Dog &);
		void	makeSound (void) const;
};

#endif //CPP_MODULE_04_DOG_HPP
