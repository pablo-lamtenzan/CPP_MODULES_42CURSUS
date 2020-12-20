/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Waepon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:56:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 06:37:19 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() :type("Undefined") { std::cout << "An initilized weapon has been created!" << std::endl; }
Weapon::Weapon(const std::string& t) : type(t) { std::cout << "An new weapon type [" << t << "] has been created!" << std::endl; }
Weapon::~Weapon() { std::cout << "A weapon type [" << type << "] has been deleted" << std::endl; }

const std::string&	Weapon::getType() const & { return (type); }
void				Weapon::setType(const std::string& newType) { type = newType; }