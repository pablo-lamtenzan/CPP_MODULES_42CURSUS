/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:12:39 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:14:26 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
    this->name = "Power Fist";
    this->Damage = 50;
    this->APCost = 8;
    this->sound = "* pschhh... SBAM! *";
}

PowerFist::~PowerFist()
{
    ;
}