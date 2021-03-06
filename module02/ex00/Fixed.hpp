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

# pragma once

# include <iostream>
# include <ostream>
# include <string>

class Fixed
{
    private :

    int					raw;
    static const int	fract = 8;

    public :

    Fixed();
    Fixed(const Fixed& src);
    ~Fixed();
    Fixed &operator=(const Fixed& src);
    int getRawBits() const;
    void setRawBits(int const r);
};
