//
// Created by Khalifa Almheiri on 19/02/2023.
//

#ifndef CPP_MODULE_04_WRONGANIMAL_HPP
#define CPP_MODULE_04_WRONGANIMAL_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal (void);
		WrongAnimal (const WrongAnimal &);
		~WrongAnimal (void);
		WrongAnimal	&operator= (const WrongAnimal &);
		void		makeSound (void) const;
		std::string	getType (void) const;
};


#endif //CPP_MODULE_04_WRONGANIMAL_HPP
