/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:17:38 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 07:13:04 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors

Character::Character()
{
    this->__name = "not defined";
    this->__idx = 0;
    int i = -1;
    while (++i < 4)
        this->__stock[i] = NULL;
    return ;
}

Character::Character(std::string &name)
{
    this->__name = name;
    this->__idx = 0;

    int i = -1;
    while (++i < 4)
        this->__stock[i] = NULL;
    return ;
}

Character::Character(const Character &src)
{
    *this = src;
    return ;
}

// Destructors

Character::~Character()
{
    // must delete materia
    return ;
}

// Operators

Character
&Character::operator= (const Character &src)
{
    if (this == &src)
    {
        this->__name = src.__name;
        this->__idx = src.__idx;

        int i = -1;
        while (++i < 4)
        {
            this->__stock[i] = NULL;
            this->__stock[i] = src.__stock[i]->clone();
        }
    }
    return (*this);
}

// Methods

std::string const
&Character::getName() const
{
    return (this->__name);
}

void
Character::equip(AMateria* m)
{
    if (this->__idx >= 0 && this->__idx < 3)
    {
        this->__stock[this->__idx] = m;
        this->__idx++;
    }
    return ;
}

void
Character::unequip(int idx)
{
    this->__stock[idx] = idx >= 0 && idx < 4 ? NULL : this->__stock[idx];
    return ;
}

void
Character::use(int idx, ICharacter& target)
{
    if (idx < this->__idx)
        this->__stock[idx]->use(target);
}