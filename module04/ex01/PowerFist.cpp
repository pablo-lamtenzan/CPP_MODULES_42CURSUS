/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:12:39 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 11:59:33 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power First", 8, 50) { }
PowerFist::PowerFist(const PowerFist &src) : AWeapon(src) { }
PowerFist::~PowerFist() { }

PowerFist&	PowerFist::operator=(const PowerFist &src)
{
	AWeapon::operator=(src);
    return (*this);
}

void		PowerFist::attack() const {std::cout << "* pschhh... SBAM! *" << std::endl; }
