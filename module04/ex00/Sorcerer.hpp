/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:45:14 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 01:34:15 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    private :
    
    std::string __name;
    std::string __title;
    
    public :
    
    // Constructor
    Sorcerer();
    Sorcerer(const Sorcerer &src);
    Sorcerer(std::string name, std::string title);
    
    // Destructor
    ~Sorcerer();
    
    // Operators
    Sorcerer &operator=(const Sorcerer &src);

    // methods
    void introduce_himself();
    void polymorph(Victim const &target) const;
    std::string get_name() const;
    std::string get_title() const;
};

std::ostream &operator<< (std::ostream &out, const Sorcerer &src);

#endif
