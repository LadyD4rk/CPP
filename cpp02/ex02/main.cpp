/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:59:52 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/02 14:41:16 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* int main( void )
{
	Fixed	a(4);
	Fixed	b(5);

	std::cout << "OPERAÇÕES ARITMÉTICAS:" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	
	std::cout << std::endl << "OPERAÇÕES ARITMÉTICAS:" << std::endl;
	std::cout << std::boolalpha;
	std::cout << (a > b) << std::endl;
	std::cout << std::boolalpha;
	std::cout << (a < b) << std::endl;
	std::cout << std::boolalpha;
	std::cout << (a >= b) << std::endl;
	std::cout << std::boolalpha;
	std::cout << (a <= b) << std::endl;
	std::cout << std::boolalpha;
	std::cout << (a == b) << std::endl;
	std::cout << std::boolalpha;
	std::cout << (a != b) << std::endl;

	std::cout << std::endl << "OPERAÇÕES ARITMÉTICAS:" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << --a << std::endl;

	std::cout << std::endl << "COMPARAÇÕES:" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
} */

int main( void )
{
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
