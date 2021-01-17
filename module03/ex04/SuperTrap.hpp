/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:20:06 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 19:40:25 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap , public NinjaTrap
{
    public :

    SuperTrap();
    SuperTrap(const std::string& name);
    SuperTrap(const SuperTrap& src);
	~SuperTrap();
	SuperTrap&	operator=(const SuperTrap& src);
	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
};
