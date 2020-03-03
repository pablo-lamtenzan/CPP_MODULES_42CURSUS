/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:46:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 01:06:40 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cstring>
#include <iostream>

class Zombie
{
    public :
    Zombie(std::string name, std::string type);
    std::string name;
    std::string type;
    
    void announce(void)
    {
        std::cout << '<' << name << " (" << type << ")> Braiiiiiiinnnssss...";
    }
};

#endif