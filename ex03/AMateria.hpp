#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &other);
		const std::string	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void use(ICharacter &target);
		~AMateria(void);
};

#endif