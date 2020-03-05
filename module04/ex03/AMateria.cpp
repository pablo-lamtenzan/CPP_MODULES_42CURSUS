/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 05:54:58 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 06:58:58 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors

AMateria::AMateria()
{
    this->__type = "not init";
    this->_xp = 0;
    return ;
}

AMateria::AMateria(std::string const &type)
{
    this->__type = type;
    this->_xp = 0;
    return ;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
    return ;
}

// Destructors

AMateria::~AMateria()
{
    return ;
}

// Operators

AMateria
&AMateria::operator= (const AMateria &src)
{
    if (this != &src)
    {
        this->__type = src.__type;
        this->_xp = src.xp;
    }
    return (*this);
}

// Methods

std::string const
&AMateria::getType() const
{
    return (this->__type);
}

unsigned int
AMateria::getXP() const
{
    return (this->_xp);    
}

void
AMateria::use(ICharacter& target)
{
    // devevol the xp increase here
    if (!strcmp(target.__type, "ice"))
        std::cout << "* shoots an ice bolt at NAME *\n";
    else if (!strcmp(target.__type , "cure"))
        std::cout << "* heals NAME’s wounds *\n";
    
    
    return ;
}
