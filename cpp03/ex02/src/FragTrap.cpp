/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:21:20 by jobraga-          #+#    #+#             */
/*   Updated: 2026/08/03 20:55:19 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "Unamed";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was initialized with..." << std::endl;
	std::cout << "	" << "(" << _hitPoints << ") - Hit points." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << name << " was initialized with..." << std::endl;
	std::cout << "	" << "(" << _hitPoints << ") - Hit points." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap (other)
{
	*this = other;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::string	new_name;
	
	if (this == &other)
		return *this;
	new_name = _name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has died." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "FragTrap " << _name << " has no energy left to do that!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "FragTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << getAttackDamage() << " points of damage." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points of " << _name << "." << std::endl; 
}

void	FragTrap::highFivesGuys()
{
	if (_hitPoints < 0)
	{
		std::cout << "FragTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " wants a high-five, let's go team!" << std::endl;
}

int		FragTrap::getAttack()
{
	return _attackDamage;
}

int		FragTrap::getEnergy()
{
	return _energyPoints;
}

std::string	FragTrap::getName()
{
	return _name;
}
