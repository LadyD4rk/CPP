/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 16:44:26 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/22 18:52:44 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created, full of ideas!" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "A brain clone is born!" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain is dead!!!" << std::endl;
}

void	Brain::setIdea(int index, std::string idea)
{
	_ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	return _ideas[index];
}

void	Brain::printBrain()
{
	std::string	idea;

	for(int i = 0; i < 100; i++)
	{
		idea = getIdea(i);
		std::cout << i << ": " << idea << std::endl;
	}
}

