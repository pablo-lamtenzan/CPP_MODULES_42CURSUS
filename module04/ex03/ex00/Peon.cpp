/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:07:48 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:04:53 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string& n) : Victim(n) { std::cout << "Zog Zog" << std::endl; }

Peon::Peon(const Victim& src) : Victim(src) { std::cout << "Zog Zog" << std::endl; }

Peon::~Peon() { std::cout << "Bleuark..." << std::endl; }

Peon&	Peon::operator=(const Victim& src)
{
    Victim::operator=(src);
	std::cout << "Zog Zog" << std::endl;
    return (*this);
}

void	Peon::getPolymorphed() const { std::cout << get_Name() << " has been turned into a pink pony" << std::endl; }

