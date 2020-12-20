/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:15:07 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:15:07 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : raw(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::Fixed(const Fixed& src) : raw(0)
{
	if (this != &src)	
		*this = src;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::Fixed(const int intValue) : raw(intValue << fract) { std::cout << "Int constructor called" << std::endl; }
Fixed::Fixed(const float floatValue) : raw(roundf(floatValue * powershift)) { std::cout << "Float constructor called" << std::endl; }
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed&		Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
		raw = src.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& src)
{
    out << src.toFloat();
    return (out);
}

int				Fixed::getRawBits() const { return (raw); }

void			Fixed::setRawBits(const int r)
{
    std::cout << "setRawBits member function called" << std::endl;
    raw = r;
}

float			Fixed::toFloat() const { return (float(raw) / powershift); }
int				Fixed::toInt() const { return (raw >> fract); }

int main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
