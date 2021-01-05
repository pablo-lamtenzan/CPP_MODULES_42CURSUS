/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:12:39 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:30:05 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power First", 8, 50) { std::cout << "PowerFirst has been constructed!" << std::endl; }
PowerFist::PowerFist(const AWeapon& src) : AWeapon(src) { std::cout << "PowerFirst has been constructed by copy!" << std::endl; }
PowerFist::~PowerFist() { std::cout << "PowerFirst has been destroyed!" << std::endl; }

PowerFist&	PowerFist::operator=(const AWeapon& src)
{
	AWeapon::operator=(src);
    return (*this);
}

void		PowerFist::attack() const {std::cout << "* pschhh... SBAM! *" << std::endl; }
