/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:20:06 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:58:32 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap , virtual public NinjaTrap
{
    public :

    // Constructors
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(const SuperTrap &src);

    // Destructors
	~SuperTrap(void);

    // Operators
	SuperTrap &	operator=(const SuperTrap &ssrc);

    // Shared Methods
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};

#endif