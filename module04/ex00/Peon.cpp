/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:07:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 01:43:41 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

// Constructors

Peon::Peon(std::string name)
{
    this->__name = name;
    std::cout << "zzz\n";
    return ;
    
}

Peon::Peon()
{
    this->__name = "Richard";
    std::cout << "zzz\n";
    return ;
}

Peon::Peon(const Peon &src)
{
    *this = src;
    return ;
}

// Destructors

Peon::~Peon()
{
    std::cout << "Ahhgggg!\n";
    return ;
}

//Operators

Peon
&Peon::operator= (const Peon &src)
{
    if (this != &src)
        this->__name = src.__name;
    return (*this);
}

// Methods

void
Peon::getPolymorphed() const
{
    std::cout << this->__name << " has been turned into a pink pony!\n";
    return ;
}
