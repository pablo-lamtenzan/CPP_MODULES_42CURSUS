/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:05:15 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 01:40:50 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
    private :

    std::string __name;
    
    public :

    // Constructors
    Peon(std::string name);
    Peon();
    Peon(const Peon &src);

    // Destructors
    ~Peon();

    // Operators
    Peon &operator= (const Peon &src);

    // Methods
    virtual void getPolymorphed() const;
};

#endif
