/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssualtTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 04:15:54 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 05:54:33 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() { std::cout << "* teleports from space *" << std::endl; }
AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	operator=(src);
    std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::~AssaultTerminator() { std::cout << "I’ll be back..." << std::endl; }

AssaultTerminator&		AssaultTerminator::operator=(const AssaultTerminator& src) { (void)src; return (*this); }

AssaultTerminator*	AssaultTerminator::clone() const { return (new AssaultTerminator(*this)); }
void			AssaultTerminator::battleCry() const { std::cout << "This code is unclean. PURIFY IT!" << std::endl; }
void			AssaultTerminator::meleeAttack() const { std::cout << "* attacks with chainfists *" << std::endl; }
void			AssaultTerminator::rangedAttack() const { std::cout << " does nothing *" << std::endl; }
