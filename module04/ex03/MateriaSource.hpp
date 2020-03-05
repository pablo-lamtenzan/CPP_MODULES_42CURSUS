/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:39:10 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 07:31:41 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public ImateriaSource
{
    private :
    
    AMateria *__stock[4];
    int __idx;

    public :

    // Constructors
    MateriaSource();
    MateriaSource(const MateriaSource &src);

    // Destructors
    virtual ~IMateriaSource(); // wtf is wthat error ? 
    ~MateriaSource();

    // Operator
    MateriaSource &operator= (const MateriaSource &src);

    // Shared Methods
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif