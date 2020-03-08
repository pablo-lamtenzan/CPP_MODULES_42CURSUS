/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:15:21 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:15:21 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

// Contructors

Fixed::Fixed() : __raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : __raw(0)
{
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : __raw(intValue << __fract)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) :  __raw(roundf(floatValue * __powershift))
{
    std::cout << "Float constructor called" << std::endl;
}
// Destructors

Fixed::~Fixed()
{
std::cout << "Destructor called" << std::endl;
}

// Operators

Fixed
&Fixed::operator= (const Fixed &src)
{
    if (&src != this)
    {
        this->__raw = src.__raw;
        std::cout << "Assignation operator called" << std::endl;
    }
    return (*this);
}

std::ostream
&operator<< (std::ostream &out, const Fixed &src)
{
    out << src.toFloat();
    return (out);
}

bool
Fixed::operator> (const Fixed &src) const
{
    return (this->__raw > src.__raw);
}

bool
Fixed::operator< (const Fixed &src) const
{
    return (this->__raw < src.__raw);
}

bool
Fixed::operator>= (const Fixed &src) const
{
    return (this->__raw >= src.__raw);
}

bool
Fixed::operator<= (const Fixed &src) const
{
    return (this->__raw <= src.__raw);
}

bool
Fixed::operator== (const Fixed &src) const
{
    return (this->__raw == src.__raw);
}

bool
Fixed::operator!= (const Fixed &src) const
{
    return (this->__raw != src.__raw);
}

Fixed
Fixed::operator+ (const Fixed &src) const
{
    return (this->__raw + src.__raw);
}

Fixed
Fixed::operator- (const Fixed &src) const
{
    return (this->__raw - src.__raw);
}
Fixed
Fixed::operator* (const Fixed &src) const
{
    return (this->__raw * src.__raw);
}

Fixed
Fixed::operator/ (const Fixed &src) const
{
    return (this->__raw / src.__raw);
}

Fixed
&Fixed::operator++ ()
{
    this->__raw++;
    return (*this);
}

Fixed
&Fixed::operator-- ()
{
    this->__raw--;
    return (*this);
}

Fixed
Fixed::operator-- (int i)
{
    (void)i;
    Fixed n = *this;
    this->__raw--;
    return (n);
}

Fixed
Fixed::operator++ (int i)
{
    (void)i;
    Fixed n = *this;
    this->__raw++;
    return (n);
}

// Methods

int
Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->__raw);
}

void
Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->__raw = raw;
}

float
Fixed::toFloat() const
{
    return (float(this->__raw) / this->__powershift);
}

int
Fixed::toInt() const
{
    return (this->__raw >> this->__fract);
}

const Fixed
&Fixed::min(const Fixed &a, const Fixed &b)
{
    return a.__raw < b.__raw ? a : b;
}

Fixed
&Fixed::min(Fixed &a, Fixed &b)
{
    return a.__raw < b.__raw ? a : b;
}

const Fixed
&Fixed::max(const Fixed &a, const Fixed &b)
{
    return a.__raw > b.__raw ? a : b;
}

Fixed
&Fixed::max(Fixed &a, Fixed &b)
{
    return a.__raw > b.__raw ? a : b;
}

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}