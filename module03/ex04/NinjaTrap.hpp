/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:55:28 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 22:01:21 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
    public :

    // Constructors
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap &src);

    // Destructors
    ~NinjaTrap();

    // Operators
    NinjaTrap &operator= (const NinjaTrap &src);

    // Shared methods
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void ninjaShoebox(NinjaTrap &target);
    void ninjaShoebox(ClapTrap &target);
    void ninjaShoebox(FragTrap &target);
    void ninjaShoebox(ScavTrap &target);
};

#endif