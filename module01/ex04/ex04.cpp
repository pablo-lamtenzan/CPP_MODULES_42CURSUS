/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 03:31:37 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 03:51:40 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void        print_adress(void)
{
    std::string reference = "HI THIS IS BRAIN";
    std::string *pointer = &reference;
    std::cout << "Reference: " << reference << '\n' << "Pointer: " << *pointer << "\n\nHave a Nice Day Brainsszzz\n";
}

int main()
{
    print_adress();
}