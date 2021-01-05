/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:54:49 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 22:04:56 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string& n) : name(n) { std::cout << "Some random victim called " << name << " just appeared!" << std::endl; }
Victim::Victim(const Victim& src) : name(src.name) { std::cout << "Some random victim called " << name << " just appeared!" << std::endl; }
Victim::~Victim() { std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl; }

Victim&	Victim::operator=(const Victim& src)
{
    if (this != &src)
        name = src.name;
    return (*this);
}

std::ostream&		operator<<(std::ostream& out, const Victim& src) { return (out << "I'm " << src.get_Name() << " and I like otters!" << std::endl); }
const std::string&	Victim::get_Name() const { return (name); }
void				Victim::introduce_hisself() { std::cout << "I'm " << name << " and I like otters!" << std::endl; }
void				Victim::getPolymorphed() const { std::cout << name << " has been turned into a cute little sheep!" << std::endl; }
