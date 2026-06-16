/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:21:20 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/16 15:44:51 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrapTrap.hpp"

FrapTrap::FrapTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FrapTrap " << name << " was initialized with..." << std::endl;
	std::cout << "	" << "(" << _hitPoints << ") - Hit points." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points." << std::endl;
}

FrapTrap::FrapTrap(const FrapTrap &other) : ClapTrap (other)
{
	*this = other;
}

FrapTrap	&FrapTrap::operator=(const FrapTrap &other)
{
	std::string	new_name;
	
	if (this == &other)
		return *this;
	new_name = _name + "jr";
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

FrapTrap::~FrapTrap()
{
	std::cout << "FrapTrap " << _name << " has died." << std::endl;
}

void	FrapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "FrapTrap " << _name << " has no energy left to do that!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "FrapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "FrapTrap " << _name << " attacks " << target << ", causing " << getAttackDamage() << " points of damage." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points of " << _name << "." << std::endl; 
}

void	FrapTrap::highFivesGuys()
{
	if (_hitPoints < 0)
	{
		std::cout << "FrapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	std::cout << "FrapTrap " << _name << " wants a high-five, let's go team!" << std::endl;
}

int		FrapTrap::getAttack()
{
	return _attackDamage;
}

int		FrapTrap::getEnergy()
{
	return _energyPoints;
}

std::string	FrapTrap::getName()
{
	return _name;
}
