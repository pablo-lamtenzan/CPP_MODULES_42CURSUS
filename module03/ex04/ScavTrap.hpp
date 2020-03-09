/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:37:56 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:06:33 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :

    // Constructor
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &src);

    // Destructors
    ~ScavTrap();

    // Oparators
    ScavTrap &operator= (const ScavTrap &src);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void challengeNewcomer();
};

#endif