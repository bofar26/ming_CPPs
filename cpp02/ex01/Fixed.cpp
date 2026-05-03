/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:01:04 by mipang            #+#    #+#             */
/*   Updated: 2026/04/03 22:48:40 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this ->_rawBits = 0;
}

Fixed::Fixed(const int n)
{
	_rawBits = n << _fractionalBits;
}

Fixed::Fixed(const float n)
{
	_rawBits = roundf(n * (1 << _fractionalBits));
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this -> _rawBits = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::	getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this -> _rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}
float	Fixed::toFloat() const
{
	return ((float)_rawBits/(1 << _fractionalBits));
}

int		Fixed::toInt( void ) const
{
	return (_rawBits >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}
