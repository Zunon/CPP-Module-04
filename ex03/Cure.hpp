/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                    :+:      :+:    :+:   */
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

class Cure: public AMateria {
    public:
        Cure(void);
        Cure(const Cure &other);
        ~Cure(void);
        Cure &operator=(const Cure &other);
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif