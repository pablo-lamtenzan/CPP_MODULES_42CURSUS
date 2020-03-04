/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:54:49 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 05:57:38 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->name = name;

    std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason!\n";
}