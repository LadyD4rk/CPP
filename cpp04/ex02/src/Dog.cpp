/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:28:39 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/22 19:01:41 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_brain = new Brain();
	type = "Dog";
	std::cout << "Dog created, ready to fetch!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	_brain = new Brain();
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.type;
		*_brain = *other._brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destroyed, no more fetching." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Au Au Au" << std::endl;
}

std::string	Dog::ideaDog(int i)
{
	if (i % 6 == 0)
		return ("I am confused.");
	else if (i % 3 == 0)
		return ("I need food.");
	else if (i % 2 == 0)
		return ("I need a ball.");
	return ("I want to play.");
}

void	Dog::createIdeas()
{
	for (int i = 0; i < 100; i++)
		_brain->setIdea(i, ideaDog(i));
}

void	Dog::getBrainDog()
{
	std::cout << "The dog is thinking about..." << std::endl;
	_brain->printBrain();
}

void	Dog::setBrainDog(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

// Cachorro criado, pronto para buscar a bolinha!
// Cachorro destruido, não vai mais buscar a bolinha.
