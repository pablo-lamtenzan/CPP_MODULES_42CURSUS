/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:59:55 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:40:38 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { std::cout << "Ice has been created!" << std::endl; }
Ice::Ice(const AMateria& src) : AMateria(src) { std::cout << "Ice has been created!" << std::endl; }
Ice::~Ice() { std::cout << "An ice has been destroyed!" << std::endl; }
Ice&		Ice::operator=(const AMateria& src)
{
	AMateria::operator=(src);
    return (*this);
}

AMateria*	Ice::clone() const { return (new Ice(*this)); }
void		Ice::use(ICharacter& target) { setXp(getXP() + 10); std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; }
