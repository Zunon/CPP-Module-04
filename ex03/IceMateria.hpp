/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:46:50 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 16:01:29 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICEMATERIA_HPP
# define ICEMATERIA_HPP

# include "AMateria.hpp"
# include <iostream>

class IceMateria: public AMateria {
    public:
        IceMateria(void);
        IceMateria(const IceMateria &other);
        ~IceMateria(void);
        IceMateria &operator=(const IceMateria &other);
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif