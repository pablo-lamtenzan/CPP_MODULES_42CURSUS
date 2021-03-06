/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   TacticalMarine.cpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/05 03:50:53 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/19 15:31:54 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() { std::cout << "Tactical Marine ready for battle" << std::endl; }
TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
	operator=(src);
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}
TacticalMarine::~TacticalMarine() { std::cout << "Aaargh..." << std::endl; }

TacticalMarine&		TacticalMarine::operator=(const TacticalMarine& src) { (void)src; return (*this); }

TacticalMarine*	TacticalMarine::clone() const { return (new TacticalMarine(*this)); }
void			TacticalMarine::battleCry() const { std::cout << "For the holy PLOT!" << std::endl; }
void			TacticalMarine::rangedAttack() const { std::cout << "* attacks with a bolter *" << std::endl; }
void			TacticalMarine::meleeAttack() const { std::cout << "* attacks with a chainsword *" << std::endl; }
