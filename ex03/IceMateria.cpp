/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:56:01 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 15:58:17 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceMateria.hpp"

IceMateria::IceMateria(void) : AMateria("ice") {}

IceMateria::IceMateria(const IceMateria &other) : AMateria(other) {}

IceMateria::~IceMateria(void) {}

IceMateria &IceMateria::operator=(const IceMateria &other) {
    AMateria::operator=(other);
    return (*this);
}

AMateria *IceMateria::clone() const {
    return (new IceMateria(*this));
}

void IceMateria::use(ICharacter &target) {
    std::cout   << "* shoots an ice bolt at " << target.getName()
                << " *" << std::endl;
}