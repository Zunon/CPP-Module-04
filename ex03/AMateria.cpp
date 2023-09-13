/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:29:03 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 17:15:15 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unaspected") {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &other) : _type(other._type) {}

const std::string	&AMateria::getType() const {
    return (_type);
}

AMateria &AMateria::operator=(const AMateria &other) {
    (void)other;
    return (*this);
}