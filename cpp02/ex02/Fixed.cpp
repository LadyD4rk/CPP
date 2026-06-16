/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:54:51 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/02 15:24:18 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const int num)
{
	_value = num << _num_bits;
}

Fixed::Fixed(const float num)
{
	_value = roundf(num * (1 << _num_bits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed()
{
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int		Fixed::getRawBits(void) const
{
	return _value;
}

float	Fixed::toFloat(void) const
{
	float	result = this->_value;
	return (result / (1 << this->_num_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_num_bits);
}

// ! OPERATORS

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this == &other)
		return (*this);
	_value = other.getRawBits();
	return (*this);
}

// * operações aritméticas

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	result;
	int		num;
	
	num = this->_value + other._value;
	result.setRawBits(num);
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	result;
	int		num;

	num = this->_value - other._value;
	result.setRawBits(num);
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	result;
	int		num;

	num = this->_value * other._value;
	result.setRawBits(num >> _num_bits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed	result;
	int		num;

	num = this->_value / other._value;
	result.setRawBits(num << _num_bits);
	return (result);
}

// * Comparações 

bool	Fixed::operator>(const Fixed &other)
{
	if (this->_value > other._value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &other)
{
	if (this->_value < other._value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &other)
{
	if (this->_value >= other._value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &other)
{
	if (this->_value <= other._value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &other)
{
	if (this->_value == other._value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &other)
{
	if (this->_value != other._value)
		return (true);
	return (false);
}

// * Decremento e Incremento

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value);
	(this->_value)++;
	return (tmp);
}

Fixed	Fixed::operator++(void)
{
	(this->_value)++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value);
	(this->_value)--;
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	(this->_value)--;
	return (*this);
}

// * Comparações

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
