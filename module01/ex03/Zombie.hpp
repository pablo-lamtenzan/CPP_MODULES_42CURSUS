/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:46:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 03:24:24 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cstring>
#include <iostream>

class Zombie
{
    public :
    Zombie();
    std::string name;
    std::string type;
    
    void RandName(void)
    {
        const char names[4][10] = {"Jeff", "Richard", "Bob", "Jamie"};
        
        name = names[rand() % 3];
    }

    void RandType(void)
    {
        const char types[4][20] = {"Common", "Brainfuck", "Abort", "Segmentation Fault"};

        type = types[rand() % 3];
    }
    
    void announce(void)
    {
        std::cout << '<' << name << " (" << type << ")> Braiiiiiiinnnssss...";
    }
};

#endif