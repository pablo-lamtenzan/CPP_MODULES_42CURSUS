/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:55:28 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 19:39:58 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
    public :
    NinjaTrap();
    NinjaTrap(const std::string& n);
    NinjaTrap(const NinjaTrap& src);
    ~NinjaTrap();
    NinjaTrap&	operator=(const NinjaTrap& src);
    void		rangedAttack(std::string const& target);
    void		meleeAttack(std::string const& target);
    void		ninjaShoebox(const ClapTrap& target);
};
