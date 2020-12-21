/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:55:28 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 04:44:33 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public :
    NinjaTrap();
    NinjaTrap(const std::string& n);
    NinjaTrap(const NinjaTrap& src);
    ~NinjaTrap();
    NinjaTrap &operator=(const NinjaTrap& src);
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void ninjaShoebox(const NinjaTrap& target);
    void ninjaShoebox(const ClapTrap& target);
    void ninjaShoebox(const FragTrap& target);
    void ninjaShoebox(const ScavTrap& target);
};

#endif