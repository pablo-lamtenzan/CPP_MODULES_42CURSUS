/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:52:52 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 01:47:09 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{

    private :

    std::string __name;
    
    public :

    // Constructors
    Victim();
    Victim(std::string name);
    Victim(const Victim &src);
    
    // Destructors
    ~Victim();

    // Operators
    Victim &operator=(const Victim &src);

    // methods
    std::string get_Name() const;
    //void introduce_hisself();
    void getPolymorphed() const;
};

std::ostream &operator<< (std::ostream &out, const Victim &src);

#endif
