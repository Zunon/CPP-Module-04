//
// Created by Khalifa Almheiri on 19/02/2023.
//

#ifndef CPP_MODULE_04_CAT_HPP
#define CPP_MODULE_04_CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat &);
		~Cat();
		Cat		&operator= (const Cat &);
		void	makeSound (void) const;
};


#endif //CPP_MODULE_04_CAT_HPP
