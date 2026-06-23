/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:10:17 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/22 19:02:34 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_brain = new Brain();
	type = "Cat";
	std::cout << "Cat created, ready to nap!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	_brain = new Brain();
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.type;
		*_brain = *other._brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destroyed, naptime is over." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaaaaaau!" << std::endl;
}

std::string	Cat::ideaCat(int i)
{
	if (i % 6 == 0)
		return ("I am confused.");
	else if (i % 3 == 0)
		return ("I want to nap.");
	else if (i % 2 == 0)
		return ("I need some fish.");
	return ("Leave me alone.");
}

void	Cat::createIdeas()
{
	for (int i = 0; i < 100; i++)
		_brain->setIdea(i, ideaCat(i));
}

void	Cat::getBrainCat()
{
	std::cout << "The cat is thinking about..." << std::endl;
	_brain->printBrain();
}

void	Cat::setBrainCat(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

// Gato criado, pronto para tirar uma soneca!
// Gato destruido, a hora da soneca acabou.

