/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlamaRifle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:04:55 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:27:16 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma rifle", 5, 21) { std::cout << "Plasmarifle has been constructed!" << std::endl; }
PlasmaRifle::PlasmaRifle(const AWeapon& src) : AWeapon(src) { std::cout << "Plasmarifle has been constructed by copy!" << std::endl; }
PlasmaRifle::~PlasmaRifle() { std::cout << "Plasmarifle has been destroyed!" << std::endl; }

PlasmaRifle		&PlasmaRifle::operator=(const AWeapon& src)
{
	AWeapon::operator=(src);
    return (*this);
}

void			PlasmaRifle::attack() const { std::cout << "* piouuu piouuu piouuu *" <<  std::endl; }
