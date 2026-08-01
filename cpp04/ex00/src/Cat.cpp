/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:10:17 by jobraga-          #+#    #+#             */
/*   Updated: 2026/08/01 18:48:10 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat created, ready to nap!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		type = other.type + "_son";
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed, naptime is over." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaaaaaau!" << std::endl;
}

// Gato criado, pronto para tirar uma soneca!
// Gato destruido, a hora da soneca acabou.
