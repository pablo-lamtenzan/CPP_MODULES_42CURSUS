/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlamaRifle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:04:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:10:32 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
    this->name = "Plasma Rifle";
    this->APCost = 21;
    this->Damage = 5;
    this->sound = "* piouuu piouuu piouuu *";
}

PlasmaRifle::~PlasmaRifle()
{
    ;
}