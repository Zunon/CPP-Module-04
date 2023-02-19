//
// Created by Khalifa Almheiri on 19/02/2023.
//

#ifndef CPP_MODULE_04_BRAIN_HPP
#define CPP_MODULE_04_BRAIN_HPP
#include <iostream>

class Brain {
	std::string	ideas[100];
public:
	Brain (void);
	Brain (const Brain &);
	Brain	&operator= (const Brain &);
	~Brain (void);
};


#endif //CPP_MODULE_04_BRAIN_HPP
