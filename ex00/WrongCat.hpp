//
// Created by Khalifa Almheiri on 19/02/2023.
//

#ifndef CPP_MODULE_04_WRONGCAT_HPP
#define CPP_MODULE_04_WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &);
		~WrongCat();
		WrongCat	&operator= (const WrongCat &);
		void		makeSound (void) const;
};


#endif //CPP_MODULE_04_WRONGCAT_HPP
