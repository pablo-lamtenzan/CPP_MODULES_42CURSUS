/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:14:32 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:14:32 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **argv)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 0;
		size_t j;
        while (++i < ac)
        {
            j = -1;
            std::string s(argv[i]);
            while (++j < s.length())
                std::cout << char(toupper(s.at(j)));
        }
        std::cout << std::endl;
    }
    return (0);
}