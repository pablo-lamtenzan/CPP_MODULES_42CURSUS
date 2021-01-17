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

Fixed::Fixed() : raw(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::Fixed(const Fixed& src) : raw(0)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &src)
    	operator=(src);
}
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
    if (&src != this)
		raw = src.getRawBits();
    return (*this);
}

int		Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (raw);
}

void	Fixed::setRawBits(const int r)
{
    std::cout << "setRawBits member function called" << std::endl;
    raw = r;
}

int		main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
