/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:19:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 21:33:47 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}