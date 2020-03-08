/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:14:53 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:14:53 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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


int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}
