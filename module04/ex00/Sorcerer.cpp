/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:47:19 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/23 10:42:45 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string& n, const std::string& t) : name(n), title(t) { std::cout << name << ", " << title << " is born!" << std::endl; }

Sorcerer::Sorcerer(const Sorcerer& src)
{
	if (this != &src)
		operator=(src);
	std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer() { std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl; }

Sorcerer&	Sorcerer::operator=(const Sorcerer &src)
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
