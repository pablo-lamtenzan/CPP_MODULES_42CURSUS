/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:46:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 04:33:45 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private :

    std::string name;
    std::string type;
    
    public :
	
    Zombie();
	~Zombie();
    Zombie(std::string& n, std::string &t);
    void announce();
    void RandName();
    void RandType();
    const std::string get_name() const;
    const std::string get_type() const;
};

#endif