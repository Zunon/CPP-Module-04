/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:28:08 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 16:46:27 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        _knowledge[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++)
            _knowledge[i] = other._knowledge[i]->clone();
    }
}

MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        delete _knowledge[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++)
            _knowledge[i] = other._knowledge[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *example) {
    for (int i = 0; i < 4; i++) {
        if (!_knowledge[i]) {
            _knowledge[i] = example->clone();
            break ;
        }
    }
}

AMateria    *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; i++) {
        if (_knowledge[i] && _knowledge[i]->getType() == type)
            return (_knowledge[i]->clone());
    }
    return (NULL);
}


