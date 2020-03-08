/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:33:10 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:56:19 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{
    
}

Brain
Human::getBrain() const
{
    return (this->newBrain);
}

std::string
Human::identify() const
{
    return (this->newBrain.identify());
}