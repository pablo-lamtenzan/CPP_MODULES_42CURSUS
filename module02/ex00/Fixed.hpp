/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:15:02 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:15:02 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>
#include <string>

class Fixed
{
    private :

    int __raw;
    static const int __fract = 8; // dont work ? set it like global xd

    public :

    // Constructors
    Fixed();
    Fixed(const Fixed &src);

    // Destructors
    ~Fixed();

    // Operators
    Fixed &operator= (const Fixed &src);

    // Shared Methods
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif