/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:04:06 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/02 02:39:08 by jobraga-         ###   ########.fr       */
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
	if(_type == NULL)
		std::cout << _name << " nao tem arma" << std::endl;
	else
		std::cout << _name << " attacks with their " << _type->getType() << std::endl;
}
