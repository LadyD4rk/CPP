/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:28:39 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/18 15:47:35 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog created, ready to fetch!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed, no more fetching." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "AAUUUUUUUUUUUUUUUUUUUU BABY!" << std::endl;
}

// Cachorro criado, pronto para buscar a bolinha!
// Cachorro destruido, não vai mais buscar a bolinha.
