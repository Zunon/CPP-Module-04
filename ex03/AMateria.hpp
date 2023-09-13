/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:29:01 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 17:15:20 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &other);
		const std::string	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void use(ICharacter &target) = 0;
		virtual ~AMateria(void) {};
		AMateria &operator=(const AMateria &other);
};

#endif