/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:45:30 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/27 16:09:01 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type)
{
	std::cout << _name << " is ready for battle!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << " has left the battlefield." << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _type.getType() << std::endl;
}

