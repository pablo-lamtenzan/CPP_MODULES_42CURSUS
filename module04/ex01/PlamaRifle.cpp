/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlamaRifle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:04:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 11:59:59 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma rifle", 5, 21) { }
PlasmaRifle::PlasmaRifle(const PlasmaRifle& src) : AWeapon(src) { }
PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle		&PlasmaRifle::operator=(const PlasmaRifle& src)
{
	AWeapon::operator=(src);
    return (*this);
}

void			PlasmaRifle::attack() const { std::cout << "* piouuu piouuu piouuu *" <<  std::endl; }
