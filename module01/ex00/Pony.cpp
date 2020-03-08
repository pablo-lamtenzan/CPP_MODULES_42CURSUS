/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:41:01 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:03:41 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string size, std::string magic) : 
    __name(name), __color(color), __size(size), __magic(magic)
{

}

std::string
Pony::getColor() const 
{
    return (this->__color);
}

std::string
Pony::getName() const
{
    return (this->__name);
}

std::string
Pony::getMagic() const
{
    return (this->__magic);
}

std::string
Pony::getSize() const
{
    return (this->__size);
}

void        ponyOnTheHeap(void)
{
    std::string color;
    std::string size;
    std::string magic;
    std::string name;
    std::cout << "What is your Pony Name?\n";
    std::cin >> name;
    std::cout << "What color is your Pony?\n";
    std::cin >> color;
    std::cout << "Your Pony size?\n";
    std::cin >> size;
    std::cout << "Has your Pony Magic ?\n";
    std::cin >> magic;

    Pony *not_a_horse = new Pony(name, color, size, magic);
    std::cout << "Congrats your have allocated: " << not_a_horse->getName() << '\n' << "His size is: " << not_a_horse->getSize() << '\n' << "His color is: " << not_a_horse->getColor() << '\n' << "His magic is: " << not_a_horse->getMagic() << std::endl;
    delete not_a_horse;
}

void        ponyOnTheStack(void)
{
    std::string color;
    std::string size;
    std::string magic;
    std::string name;
    std::cout << "What is your Pony Name?\n";
    std::cin >> name;
    std::cout << "What color is your Pony?\n";
    std::cin >> color;
    std::cout << "Your Pony size?\n";
    std::cin >> size;
    std::cout << "Has your Pony Magic ?\n";
    std::cin >> magic;

    Pony not_a_horse(name, color, size, magic);
    std::cout << "Congrats your have stacked: " << not_a_horse.getName() << '\n' << "His size is: " << not_a_horse.getSize() << '\n' << "His color is: " << not_a_horse.getColor() << '\n' << "His magic is: " << not_a_horse.getMagic() << std::endl;
}