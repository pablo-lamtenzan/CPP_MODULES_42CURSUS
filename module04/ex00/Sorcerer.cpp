/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:47:19 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 01:42:53 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

// Constructors

Sorcerer::Sorcerer()
{
    this->__name = "Bryan";
    this->__title = "Sorcerer";
    std::cout << this->__name << ", " << this->__title << " is born!\n";
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->__name = name;
    this->__title = title;
    
    std::cout << name << ", " << title << " is born!\n";
    return ;
}

Sorcerer::Sorcerer(const Sorcerer &src)
{
    *this = src;
    return ;
    
}

// Destructors

Sorcerer::~Sorcerer()
{
    std::cout << this->__name << ", " << this->__title << ", is dead. Comsequences will never be the same!\n";
    return ;
}

// Operators

Sorcerer
&Sorcerer::operator= (const Sorcerer &src)
{
    if (this != &src)
    {
        this->__name = src.__name;
        this->__title = src.__title;
    }
    return (*this);
}

std::ostream
&operator<< (std::ostream &out, const Sorcerer &src)
{
    out << "I am " << src.get_name() << ", " << src.get_title() << ", and i like ponies!\n";
    return (out);
}

// methods

void
Sorcerer::introduce_himself()
{
        std::cout << "I am " << this->__name << ", " << this->__title << ", and i like ponies!\n";
        return ;
}

void
Sorcerer::polymorph(Victim const &target) const
{
        target.getPolymorphed();
        return ;
}

std::string
Sorcerer::get_name() const
{
    return (this->__name);
}

std::string
Sorcerer::get_title() const
{
        return (this->__title);
}
