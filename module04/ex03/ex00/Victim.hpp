/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:52:52 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 03:42:50 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string>

class Victim
{
	Victim();
	std::string name;

    public :

    Victim(const std::string& n);
    Victim(const Victim& src);
    virtual ~Victim();
    Victim&				operator=(const Victim& src);
    const std::string&	get_Name() const;
    void				introduce_hisself();
    virtual void		getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& out, const Victim& src);
