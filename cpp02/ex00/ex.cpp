/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:43:15 by jobraga-          #+#    #+#             */
/*   Updated: 2026/05/14 11:43:17 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
} */

class Basic
{
private:
	/* data */
public:
	int		n;
	Basic(int set_n);
	Basic(const Basic& basic_numb);
	~Basic();
};

Basic::Basic(int set_n)
{
	n = set_n;
}

Basic::Basic(const Basic& basic_numb)
{
	n = 2 * basic_numb.n;

	std::cout << "Copy constructor called: " << n << std::endl;
}

Basic::~Basic()
{
}

int	main()
{
	Basic	num1(7);

	std::cout << "Number1 = " << num1.n << std::endl;

	Basic	num2(num1);

	std::cout << "Number2 = " << num2.n << std::endl;

	Basic	num3(5);
	Basic	num4(10);

	std::cout << "Number3 antes = " << num3.n << std::endl;
	std::cout << "Number4 antes = " << num4.n << std::endl;
	
	num3 = num4;
	
	std::cout << "Number3 depois = " << num3.n << std::endl;
	std::cout << "Number4 depois = " << num4.n << std::endl;

	return (0);
}