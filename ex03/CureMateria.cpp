/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:02:14 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 16:03:03 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"

CureMateria::CureMateria(void) : AMateria("cure") {}

CureMateria::CureMateria(const CureMateria &other) : AMateria(other) {}

CureMateria::~CureMateria(void) {}

CureMateria &CureMateria::operator=(const CureMateria &other) {
    AMateria::operator=(other);
    return (*this);
}

AMateria *CureMateria::clone() const {
    return (new CureMateria(*this));
}

void CureMateria::use(ICharacter &target) {
    std::cout   << "* heals " << target.getName()
                << "'s wounds *" << std::endl;
}