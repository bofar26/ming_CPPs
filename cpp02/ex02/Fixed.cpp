/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <mipang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:01:04 by mipang            #+#    #+#             */
/*   Updated: 2026/04/09 21:57:03 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
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
	*this = other;
}
Fixed&	Fixed::operator=(const Fixed& other)
{
	this -> _rawBits = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{}

int	Fixed::	getRawBits() const
{
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

Fixed	Fixed::operator+(const Fixed& other) const
{
	return (Fixed((this -> toFloat()) + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	return (Fixed((this -> toFloat()) - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	return (Fixed((this -> toFloat()) * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	if (other.getRawBits() == 0)
		return (Fixed());
	return (Fixed((this -> toFloat()) / other.toFloat()));
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this -> _rawBits < other._rawBits);
}

bool	Fixed::operator>(const Fixed& other) const
{
	return (this -> _rawBits > other._rawBits);
}


bool	Fixed::operator==(const Fixed& other) const
{
	return (this -> _rawBits == other._rawBits);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this -> _rawBits != other._rawBits);
}

bool	Fixed::operator>=(const Fixed& other) const
{

	return (this -> _rawBits >= other._rawBits);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this -> _rawBits <= other._rawBits);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	_rawBits ++;
	return (temp);
}
Fixed	Fixed::operator++()
{
	_rawBits ++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	_rawBits --;
	return (temp);
}

Fixed	Fixed::operator--()
{
	_rawBits --;
	return (*this);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}
