/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:17:38 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:25:21 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Undefined"), idx(0)
{
    for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
		stock[i] = NULL;
	std::cout << "An empty Characer has been created!" <<std::endl;
}

Character::Character(const std::string& n) : name(n), idx(0)
{
    for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
		stock[i] = NULL;
	std::cout << "A new Characer has been created!" <<std::endl;
}

Character::Character(const Character& src)
{
	operator=(src);
	std::cout << "A new Characer has been created by copy!" <<std::endl;
}

Character::~Character()
{
	for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
		delete stock[i];
	std::cout << "Character " << name << " has been destroyed!" << std::endl;
}

Character&		Character::operator=(const Character& src)
{
    if (this != &src)
    {
        name = src.getName();
        idx = src.get_idx();
        for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
			stock[i] = src.stock[i]->clone();
    }
    return (*this);
}

std::string const	&Character::getName() const { return (name); }
void				Character::equip(AMateria* m)
{
    if (idx >= 0 && idx < 3)
        stock[idx++] = m;
}

void					Character::unequip(int i)
{
    if (i >= 0 && i < 3)
	{
        stock[i] = NULL;
		idx--;
	}
}

void					Character::use(int i, ICharacter& target) { if (i < idx) stock[i]->use(target); }
int						Character::get_idx() const { return (idx); }