/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:18:33 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/16 11:24:33 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;	
	std::cout << "ClapTrap " << name << " was initialized with..." << std::endl;
	std::cout << "	" << "(" << _hitPoints << ") - Hit points." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has died." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no energy left to do that!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << getAttackDamage() << " points od damage." << std::endl;
	std::cout << "	" << "(" << _energyPoints << ") - Energy points of " << _name << "." << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no energy left to do that!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	if ((int)amount >= _hitPoints)
		std::cout << "	" << "(0) - Hit points of " << _name << "." << std::endl;
	else
		std::cout << "	" << "(" << _hitPoints << ") - Hit points of " << _name << "." << std::endl; 
	std::cout << "	" << "(" << _energyPoints << ") - Energy points of " << _name << "." << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		if (_energyPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no energy left to do that!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " fixed itself, restoring " << amount << " hit points." << std::endl;
	std::cout << "	" << "(" << _hitPoints << ") - Hit points of " << _name << "." << std::endl; 
	std::cout << "	" << "(" << _energyPoints << ") - Energy points of " << _name << "." << std::endl;
}

int		ClapTrap::getAttackDamage()
{
	return _attackDamage;
}

