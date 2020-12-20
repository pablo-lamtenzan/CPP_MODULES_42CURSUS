/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:15:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:15:12 by plamtenz         ###   ########.fr       */
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

    int					raw;
    static const int	fract = 8;
    static const int	powershift = 256;
    static const int	mask = 255;

    public :

    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed& src);
    ~Fixed();
    Fixed& operator=(const Fixed& src);
    int getRawBits() const;
    void setRawBits(int const r);
    float toFloat() const;
    int toInt() const;

};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif