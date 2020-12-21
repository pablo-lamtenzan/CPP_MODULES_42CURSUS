/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:07:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 08:40:27 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string& n) : Victim(n) { std::cout << "Zog Zog" << std::endl; }

Peon::Peon(const Peon& src) : Victim(src)
{
	if (this != &src)
    	*this = src;
    std::cout << "Zog Zog" << std::endl;
}

Peon::~Peon() { std::cout << "Bleuark..." << std::endl; }

Peon&	Peon::operator=(const Peon& src)
{
    Victim::operator=(src);
	std::cout << "Zog Zog" << std::endl;
    return (*this);
}

void	Peon::getPolymorphed() const { std::cout << get_Name() << " has been turned into a pink pony" << std::endl; }

