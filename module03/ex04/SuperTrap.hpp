/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:20:06 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 05:20:46 by pablo            ###   ########lyon.fr   */
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

    SuperTrap();
    SuperTrap(const std::string& name);
    SuperTrap(const SuperTrap& src);
	~SuperTrap(void);
	SuperTrap&	operator=(const SuperTrap& src);
	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
};

#endif