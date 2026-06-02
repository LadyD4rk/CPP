/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:59:52 by jobraga-          #+#    #+#             */
/*   Updated: 2026/05/27 15:51:52 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed	a(5);
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
	std::cout << ++a << std::endl;
	
	return 0;
}
