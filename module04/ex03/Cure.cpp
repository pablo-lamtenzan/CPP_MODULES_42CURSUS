/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:43:09 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 07:55:47 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors

Cure::Cure() : AMateria("cure")
{
    return ;
}

Cure::Cure(const Cure &src)
{
    *this = src;
    return ;
}

// Destructors

Cure::~Cure()
{
    return ;
}

// Operators

Cure
&Cure::operator= (const Cure &src)
{
    if (this != &src)
    {
        this->__type = src.__type;
        this->_xp = src._xp;
    }
    return (*this);
}

// Methods

AMateria
*Cure::clone() const
{
    return (new Cure());
}

void
Cure::use(ICharacter &target)
{
    std::cout << " * heals " << target.getName() << "'s wounds *\n";
    return ;
}