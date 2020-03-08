/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:59:23 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:32:24 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name, std::string type) : __name(name), __type(type)
{

}

void
Zombie::announce()
{
    std::cout << '<' << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string
Zombie::getName() const
{
    return (this->__name);
}

std::string
Zombie::getType() const
{
    return (this->__type);
}

void
Zombie::RandName()
{
    const char names[4][10] = {"Jeff", "Richard", "Bob", "Jamie"};
    this->__name = names[rand() % 4];
}

void
Zombie::RandType()
{
    const char types[4][20] = {"Common", "Brainfuck", "Abort", "Segmentation Fault"};
    this->__type = types[rand() % 4];
}