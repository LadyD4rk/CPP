/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:43:20 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/22 15:43:22 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat created, ready to nap!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.type + "_son";
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed, naptime is over." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Au Au?????" << std::endl;
}
