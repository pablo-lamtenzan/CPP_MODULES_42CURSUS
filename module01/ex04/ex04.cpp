/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 03:31:37 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:39:13 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void        print_adress()
{
    std::string reference = "HI THIS IS BRAIN";
    std::string *pointer = &reference;
    std::cout << "Reference: " << reference << std::endl << "Pointer: " << *pointer << "\n\nHave a Nice Day" << std::endl << "Brainsszzz" << std::endl;
}

int main()
{
    print_adress();
    return (0)
}