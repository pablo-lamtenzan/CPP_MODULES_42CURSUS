/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:47:19 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 06:17:15 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : name("Default Robert"), title("The Default Magnificient") { std::cout << name << ", " << title << " is born!" << std::endl; }
Sorcerer::Sorcerer(const std::string& n, const std::string& t) : name(n), title(t) { std::cout << name << ", " << title << " is born!" << std::endl; }

Sorcerer::Sorcerer(const Sorcerer& src)
{
	if (this != &src)
    	*this = src;
	std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer() { std::cout <<name << ", " << title << ", is dead. Consequences will never be the same!\n"; }

Sorcerer&	Sorcerer::operator= (const Sorcerer &src)
{
    if (this != &src)
    {
        name = src.name;
        title = src.title;
    }
    return (*this);
}

std::ostream&		operator<<(std::ostream& out, const Sorcerer& src)	{ return (out << "I am " << src.get_name() << ", " << src.get_title() << ", and i like ponies!" << std::endl); }
void				Sorcerer::introduce_himself() { std::cout << "I am " << name << ", " << title << ", and i like ponies!" << std::endl; }
void				Sorcerer::polymorph(Victim const &target) const { target.getPolymorphed(); }
const std::string&	Sorcerer::get_name() const { return (name); }
const std::string&	Sorcerer::get_title() const { return (title); }
