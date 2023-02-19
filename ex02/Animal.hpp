//
// Created by Khalifa Almheiri on 19/02/2023.
//

#ifndef CPP_MODULE_04_ANIMAL_HPP
# define CPP_MODULE_04_ANIMAL_HPP
#include <iostream>

class Animal {
	protected:
		std::string		type;
	public:
		Animal (void);
		Animal (const Animal &);
		virtual ~Animal (void);
		Animal			&operator= (const Animal &);
		virtual void	makeSound (void) const = 0;
		std::string		getType (void) const;
};


#endif //CPP_MODULE_04_ANIMAL_HPP
