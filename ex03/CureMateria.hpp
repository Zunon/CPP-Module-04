/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:00:05 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 16:01:49 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUREMATERIA_HPP
# define CUREMATERIA_HPP

# include "AMateria.hpp"
# include <iostream>

class CureMateria: public AMateria {
    public:
        CureMateria(void);
        CureMateria(const CureMateria &other);
        ~CureMateria(void);
        CureMateria &operator=(const CureMateria &other);
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif