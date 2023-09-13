/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:26:04 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/13 16:46:26 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
    private:
        AMateria *_knowledge[4];
        int _count;
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &other);
        ~MateriaSource(void);
        MateriaSource &operator=(const MateriaSource &other);
        void learnMateria(AMateria *example);
        AMateria* createMateria(const std::string &type);
};

#endif