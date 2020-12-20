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

Fixed::Fixed() : raw(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::Fixed(const Fixed& src) : raw(0)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &src)
    	*this = src;
}
Fixed::Fixed(const int intValue) : raw(intValue << fract) { std::cout << "Int constructor called" << std::endl; }
Fixed::Fixed(const float floatValue) :  raw(roundf(floatValue * powershift)) { std::cout << "Float constructor called" << std::endl; }
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed&			Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
    if (&src != this)
        raw = src.getRawBits();
    return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Fixed &src) { return (out << src.toFloat()); }

bool			Fixed::operator>(const Fixed& src) const { return (raw > src.getRawBits()); }
bool			Fixed::operator<(const Fixed& src) const { return (raw < src.getRawBits()); }
bool			Fixed::operator>=(const Fixed& src) const { return (!operator<(src)); }
bool			Fixed::operator<=(const Fixed& src) const { return (!operator>(src)); }
bool			Fixed::operator==(const Fixed& src) const { return (raw == src.getRawBits()); }
bool			Fixed::operator!=(const Fixed& src) const { return (!operator==(src)); };
Fixed			Fixed::operator+(const Fixed &src) const { return (raw + src.getRawBits()); }
Fixed			Fixed::operator-(const Fixed &src) const {	return (raw - src.getRawBits()); }
Fixed			Fixed::operator*(const Fixed &src) const {	return (raw * src.getRawBits()); }
Fixed			Fixed::operator/(const Fixed &src) const {	return (raw / src.getRawBits()); }
Fixed&			Fixed::operator++()
{
    raw++;
    return (*this);
}
Fixed&			Fixed::operator--()
{
    raw--;
    return (*this);
}
Fixed			Fixed::operator--(int)
{
    Fixed n = *this;
    raw--;
    return (n);
}
Fixed			Fixed::operator++(int)
{
    Fixed n = *this;
    raw++;
    return (n);
}

int				Fixed::getRawBits() const { return (raw); }
void			Fixed::setRawBits(const int r) { raw = r; }
float			Fixed::toFloat() const { return (float(raw) / powershift); }
int				Fixed::toInt() const { return (raw >> fract); }

// Fixed is not member like the subject said (and who cares, this is optional)
const Fixed&	min(const Fixed& a, const Fixed& b) { return (a.getRawBits() < b.getRawBits() ? a : b); }
Fixed&			min(Fixed& a, Fixed& b) { return (a.getRawBits() < b.getRawBits() ? a : b); }
const Fixed&	max(const Fixed& a, const Fixed& b) { return (a.getRawBits() > b.getRawBits() ? a : b); }
Fixed&			max(Fixed &a, Fixed &b) { return a.getRawBits() > b.getRawBits() ? a : b; }

// TO DO: Issues last lines in the main
int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << max( a, b ) << std::endl;
	return 0;
}