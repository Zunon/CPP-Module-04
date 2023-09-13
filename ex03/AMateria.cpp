/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:29:03 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 15:37:13 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unaspected") {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &other) : _type(other._type) {}

AMateria::~AMateria(void) {}

const std::string	&AMateria::getType() const {
    return (_type);
}

AMateria &AMateria::operator=(const AMateria &other) {
    _type = other._type;
    return (*this);
}