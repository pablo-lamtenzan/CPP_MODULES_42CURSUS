/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 05:54:58 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:34:00 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), type("Undefined") { std::cout << "An Undefined AMaeria has been created!" << std::endl; }
AMateria::AMateria(std::string const& t) : _xp(0), type(t) { std::cout << "An new AMaeria has been created!" << std::endl; }

AMateria::AMateria(const AMateria& src)
{
	std::cout << "An new AMaeria has been created!" << std::endl;
	operator=(src);
}

AMateria::~AMateria() { std::cout << "An AMateria type " << type << " has been destroyed" << std::endl; }

AMateria&	AMateria::operator=(const AMateria& src)
{
    if (this != &src)
    {
        type = src.getType();
        _xp = src.getXP();
    }
    return (*this);
}

std::string const&	AMateria::getType() const { return (type); }
unsigned int		AMateria::getXP() const { return (_xp); }
void				AMateria::use(ICharacter& target) { (void)target; _xp += 10; }
void				AMateria::setXp(unsigned int xp) { _xp = xp; }