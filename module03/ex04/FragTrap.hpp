/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 02:20:47 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 19:39:46 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <random>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{	
    public :

    FragTrap();
    FragTrap(const std::string& n);
    FragTrap(const FragTrap& src);
    ~FragTrap();
    FragTrap&	operator=(const FragTrap& src);
    void		rangedAttack(std::string const& target);
    void		meleeAttack(std::string const& target);
    void		vaulthunter_dot_exe(std::string const& target);
};
