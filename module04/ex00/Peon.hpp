/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:05:15 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 08:30:08 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : virtual public Victim
{
	private:
	Peon();

    public :

    Peon(const std::string& name);
    Peon(const Peon& src);
    ~Peon();
    Peon& operator= (const Peon& src);
    void getPolymorphed() const;
};

#endif
