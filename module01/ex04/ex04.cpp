/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 03:31:37 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:24:00 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void        print_adress()
{
	static const char work[] = "HI THIS IS BRAIN";

    std::string reference = work;
	std::cout << "Reference: " << reference << std::endl;
    std::string *pointer = &reference;
    std::cout << "Pointer: " << *pointer << std::endl;
}

int main()
{
    print_adress();
    return (0);
}