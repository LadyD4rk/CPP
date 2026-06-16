/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 13:09:39 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/16 15:29:33 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << name << " was initialized with..." << std::endl;
	std::cout << "	" << "(" << _hitPoints << ") - Hit points." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::string	new_name;

	if (this == &other)
		return (*this);
	new_name = other._name + "jr";
 	_name = new_name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has died." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "Scavtrap " << _name << " has no energy left to do that!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "Scavtrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "Scavtrap " << _name << " attacks " << target << ", causing " << getAttackDamage() << " points of damage." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points of " << _name << "." << std::endl; 
}

void	ScavTrap::guardGate()
{
	if (_hitPoints < 0)
	{
		std::cout << "Scavtrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now guarding the gate!" << std::endl;
}

int		ScavTrap::getAttack()
{
	return _attackDamage;
}

int		ScavTrap::getEnergy()
{
	return _energyPoints;
}

std::string	ScavTrap::getName()
{
	return _name;
}


