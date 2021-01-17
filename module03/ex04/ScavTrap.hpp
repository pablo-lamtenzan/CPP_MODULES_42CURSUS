/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:37:56 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 19:40:11 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <random>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :

    ScavTrap();
    ScavTrap(const std::string& n);
    ScavTrap(const ScavTrap& src);
    ~ScavTrap();
    ScavTrap&	operator=(const ScavTrap& src);
    void		rangedAttack(std::string const& target);
    void		meleeAttack(std::string const& target);
    void		challengeNewcomer();
};
