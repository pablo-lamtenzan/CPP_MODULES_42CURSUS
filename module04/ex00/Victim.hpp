/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:52:52 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 08:34:18 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
	private:

	Victim();
	std::string name;

    public :

    Victim(const std::string& n);
    Victim(const Victim& src);
    ~Victim();
    Victim& operator=(const Victim& src);
    const std::string& get_Name() const;
    void introduce_hisself();
    virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& out, const Victim& src);

#endif
