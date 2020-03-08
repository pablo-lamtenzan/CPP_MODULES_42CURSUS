/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:46:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:32:09 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private :

    std::string __name;
    std::string __type;
    
    public :
    
    // Constructors
    Zombie();
    Zombie(std::string name, std::string type);

    // Shared methods
    void announce();
    void RandName();
    void RandType();
    std::string getName() const;
    std::string getType() const;
};

#endif