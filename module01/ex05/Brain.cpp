/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:31:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:55:28 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(std::string IQ, std::string Energy, std::string Age, std::string Crazyness) :
    __IQ(IQ), __Energy(Energy), __Age(Age), __Crazyness(Crazyness)
{
    this->__id = (const void *)this;
}

Brain::Brain()
{
    this->__id = (const void *)this;
}

Brain::~Brain()
{
    
}

std::string
Brain::identify() const
{
    std::ostringstream address;
    address << this->__id;
    return (address.str());
}

std::string
Brain::getAge() const
{
    return (this->__Age);
}

std::string
Brain::getIQ() const
{
    return (this->__IQ);
}

std::string
Brain::getEnergy() const
{
    return (this->__Energy);
}

std::string
Brain::getCrazyness() const
{
    return (this->__Crazyness);
}