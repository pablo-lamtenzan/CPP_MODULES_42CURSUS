/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 02:20:47 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 22:01:10 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :

    // Constructors
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);

    // Destructors
    ~FragTrap();

    // Operators
    FragTrap &operator= (const FragTrap &src);

    // Shared methods
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void vaulthunter_dot_exe(std::string const &target);
    int getHitPoints() const;
};

#endif
