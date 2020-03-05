/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:54:49 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 01:42:34 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

// Constructor

Victim::Victim()
{
    this->__name = "Bruce";
    std::cout << "Some random victim called " << this->__name << " just appeared!\n";
    return ;
}

Victim::Victim(std::string name)
{
    this->__name = name;
    std::cout << "Some random victim called " << this->__name << " just appeared!\n";
    return ;
}

Victim::Victim(const Victim &src)
{
    *this = src;
    return ;
}

// Destructors

Victim::~Victim()
{
    std::cout << "Victim " << this->__name << " just died for no apparent reason!\n";
    return ;
}

// Operator

Victim
&Victim::operator= (const Victim &src)
{
    if (this != &src)
        this->__name = src.__name;
    return (*this);
}

std::ostream
&operator<< (std::ostream &out, const Victim &src)
{
    out << "I'm " << src.get_Name() << " and I like otters!\n";
    return (out);
}

// methods

std::string
Victim::get_Name() const
{
    return (this->__name);
}

/*
void
Victim::introduce_hisself()
{
    std::cout << "I'm " << this->__name << " and I like otters!\n";
}
*/

void
Victim::getPolymorphed() const
{
    std::cout << this->__name << " has been urned into a cute little sheep!\n";
}
