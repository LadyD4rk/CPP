/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:04:06 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 17:13:28 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL)
{
}

HumanB::~HumanB()
{	
}

void	HumanB::setWeapon(Weapon& type)
{
	this->_type = &type;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _type->getType() << std::endl;
}
