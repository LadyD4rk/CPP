/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:41:59 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/27 15:56:05 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << "Weapon created: " << _type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed: " << _type << std::endl;
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}

std::string	Weapon::getType()
{
	return _type;
}
