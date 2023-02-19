//
// Created by Khalifa Almheiri on 19/02/2023.
//

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "A Hundred Braincells Flicker Into Existence!" << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::memcpy(ideas, brain.ideas, sizeof(ideas));
	std::cout << "An identical twin-brain is born!" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain) {
	if (this != &brain)
		std::memcpy(ideas, brain.ideas, sizeof(ideas));
	std::cout << "A brain is copied!" << std::endl;
	return *this;
}

Brain::~Brain(void) {
	std::cout << "A Hundred Braincells Die!" << std::endl;
}