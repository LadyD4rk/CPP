/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:54:51 by jobraga-          #+#    #+#             */
/*   Updated: 2026/05/27 15:57:12 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	_value = num << _num_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(num * (1 << _num_bits));
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
	std::cout << "Copy assignment operator called" << std::endl;
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
