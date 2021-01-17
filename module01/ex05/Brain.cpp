/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:31:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:27:52 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(const std::string& a, const std::string& i, const std::string& m, const std::string& c)
	: age(a), iq(i), memory(m), control(c), id((const void*const)this) { std::cout << "A new brain has been created!" << std::endl; }

Brain::Brain() : age("Undefined"), iq("Undefined"), memory("Undefined"), control("Undefined"), id((const void *const)this) {}

Brain::~Brain() { std::cout << "A brain (" << age << " years old) has been deleted" << std::endl; }

std::string	Brain::identify() const
{
	std::ostringstream address;
    address << id;
    return (address.str());
}

const std::string&	Brain::get_age() const { return (age); }
const std::string&	Brain::get_iq() const { return (iq); }
const std::string&	Brain::get_memory() const { return (memory); }
const std::string&	Brain::get_control() const { return (control); }
