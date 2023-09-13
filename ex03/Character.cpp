/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:15:56 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 16:21:38 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Cloud Strife"), _count(0) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name), _count(0) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character &other) {
    *this = other;
}

Character::~Character(void) {
    for (int i = 0; i < _count; i++)
        delete _inventory[i];
}

Character &Character::operator=(const Character &other) {
    _name = other._name;
    _count = other._count;
    for (int i = 0; i < _count; i++)
        _inventory[i] = other._inventory[i]->clone();
    return (*this);
}

std::string const &Character::getName(void) const {
    return (_name);
}

void Character::equip(AMateria *m) {
    if (_count < 4 && m)
        _inventory[_count++] = m;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < _count)
        _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < _count && _inventory[idx])
        _inventory[idx]->use(target);
}