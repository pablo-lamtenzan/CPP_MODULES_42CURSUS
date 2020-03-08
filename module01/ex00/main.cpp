/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:12:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:03:26 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
    std::string something;
    std::cout << "Welcome to my Pony creator, please write something for continue." << std::endl;
    std::cin >> something;
    std::cout << "Lets Allocate some Pony, please write something for continue.\n" << std::endl;
    std::cin >> something;
    ponyOnTheHeap();
    std::cout << "Lets Stack some Pony, please write something for continue.\n" << std::endl;
    std::cin >> something;
    ponyOnTheStack();
}