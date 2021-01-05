/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:05:15 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:04:47 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "Victim.hpp"

class Peon : public Victim
{
	Peon();

    public :

    Peon(const std::string& name);
    Peon(const Victim& src);
    ~Peon();
    Peon&	operator=(const Victim& src);
    void	getPolymorphed() const;
};
