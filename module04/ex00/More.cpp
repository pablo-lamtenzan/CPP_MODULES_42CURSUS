/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   More.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 03:47:57 by pablo             #+#    #+#             */
/*   Updated: 2021/01/05 04:14:24 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "More.hpp"

More::More(const std::string& n) : Victim(n) { std::cout << "Subject want more classes with no reason, I ll give it more classes with no reason" << std::endl; }

More::More(const Victim& src) : Victim(src) { std::cout << "Subject want more classes with no reason, I ll give it more classes with no reason" << std::endl; }

More::~More() { std::cout << "More is now less (destructed " << get_Name() << ")" << std::endl; }

More&		More::operator=(const Victim& src)
{
	Victim::operator=(src);
	std::cout << "More core copy assignation operator called" << std::endl;
	return (*this);
}

void		More::getPolymorphed() const { std::cout << get_Name() << " has been turned into a sea-horse!" << std::endl; }