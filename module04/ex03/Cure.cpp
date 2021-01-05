/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:43:09 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:41:17 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { std::cout << "Cure has been created!" << std::endl; }
Cure::Cure(const AMateria& src) : AMateria(src) { std::cout << "Cure has been created!" << std::endl; }
Cure::~Cure() { std::cout << "A cure has been destroyed!" << std::endl; }
Cure&		Cure::operator=(const AMateria& src)
{
	AMateria::operator=(src);
    return (*this);
}

AMateria*	Cure::clone() const { return (new Cure(*this)); }
void		Cure::use(ICharacter& target) { setXp(getXP() + 10); std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; }
