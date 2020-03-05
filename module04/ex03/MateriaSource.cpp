/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:47:00 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 07:38:06 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructors

MateriaSource::MateriaSource()
{
    this->__idx = 0;
    int i = -1;
    while (++i < 4)
        this->__stock[i] = NULL;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
    return ;
}

// Destructors

MateriaSource::~MateriaSource()
{
    return ;
}

// Operators

MateriaSource
&MateriaSource::operator= (const MateriaSource &src)
{
    if (this == &src)
    {
        this->__idx = src.__idx;
        int i = -1;
        while (++i < 4)
        {
            this->__stock[i] = NULL;
            this->__stock[i] = src.__stock[0]->clone();
        }
    }
    return (*this);
}

// Methods

void
MateriaSource::learnMateria(AMateria *m)
{
    if (this->__idx >= 0 && this->__idx < 4)
    {
        this->__stock[this->__idx] = m;
        this->__idx++;
    }
    return ;
}

AMateria
*MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice")
        return (new Ice());
    else if (type == "cure")
        return (new Cure());
    return (NULL);
}