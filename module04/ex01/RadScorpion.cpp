/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:35:26 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 09:54:42 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion") { std::cout << "* click click click *" << std::endl; }
RadScorpion::RadScorpion(const RadScorpion &src)  : Enemy(src) { std::cout << "* click click click *" << std::endl; }
RadScorpion::~RadScorpion() { std::cout << "* SPROTCH *" << std::endl; }

RadScorpion&RadScorpion::operator= (const RadScorpion &src)
{
    Enemy::operator=(src);
    return (*this);
}
