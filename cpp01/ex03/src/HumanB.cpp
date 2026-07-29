/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:04:06 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/27 16:00:13 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL)
{
	std::cout << _name << " is ready for battle!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << " has left the battlefield." << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	this->_type = &type;
	std::cout << _name << " picked up a weapon." << std::endl;
}

void	HumanB::attack()
{
	if(_type == NULL)
		std::cout << _name << " has no weapon." << std::endl;
	else
		std::cout << _name << " attacks with their " << _type->getType() << std::endl;
}
