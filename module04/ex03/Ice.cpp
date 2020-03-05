/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:59:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 08:05:06 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors

Ice::Ice() : AMateria("Cure")
{
    return ;
}

Ice::Ice(const Ice &src)
{
    *this = src;
}

// Destructors

Ice::~Ice()
{
    return ;
}

// Operators

Ice
&Ice::operator= (const Ice &src)
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
*Ice::clone() const
{
    return (new Ice());
}

void
Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << '\n';
}