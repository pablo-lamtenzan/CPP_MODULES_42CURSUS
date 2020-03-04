/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:47:19 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 06:22:51 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    
    std::cout << name << ", " << title << " is born!\n"; 
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << ", is dead. Comsequences will never be the same!\n";
}