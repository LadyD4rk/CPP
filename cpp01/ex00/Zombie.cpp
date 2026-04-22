/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:39:43 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/21 14:41:00 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(void)
{
	std::cout << name << " got shot and died." << std::endl << std::endl;
}

void 	Zombie::announce()
{
	std::cout << "\t" << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombie(std::string name)
{
	this->name = name;
}

void	Zombie::newZombieAnnounce()
{
	std::cout << name << " shouted..." << std::endl;
	announce();
	std::cout << "Will you save Armindo..." << std::endl;
}
