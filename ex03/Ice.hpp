/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:46:50 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 16:55:04 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice: public AMateria {
    public:
        Ice(void);
        Ice(const Ice &other);
        ~Ice(void);
        Ice &operator=(const Ice &other);
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif