/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:04:06 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/19 12:16:30 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), type(NULL)
{
}

HumanB::~HumanB()
{	
}

void	HumanB::setWeapon(Weapon& type)
{
	this->type = &type;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << type->getType() << std::endl;
}
