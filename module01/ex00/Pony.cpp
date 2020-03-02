/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:41:01 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 00:28:23 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string size, std::string magic)
{
    this->name = name;
    this->color = color;
    this->size = size;
    this->magic = magic;
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
    std::cout << "Congrats your have allocated: " << not_a_horse->name << '\n' << "His size is: " << not_a_horse->size << '\n' << "His color is: " << not_a_horse->color << '\n' << "His magic is: " << not_a_horse->magic << '\n';
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
    std::cout << "Congrats your have stacked: " << not_a_horse.name << '\n' << "His size is: " << not_a_horse.size << '\n' << "His color is: " << not_a_horse.color << '\n' << "His magic is: " << not_a_horse.magic << '\n';
}