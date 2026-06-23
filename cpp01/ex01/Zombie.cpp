/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:26:14 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 17:12:39 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(void)
{
	std::cout << _name << " got shot and died." << std::endl;
}

void 	Zombie::announce()
{
	std::cout << "\t" << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombie(std::string name)
{
	this->_name = name;
}
