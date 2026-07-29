/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:39:43 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/27 14:22:54 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie: Hello World!!!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " got shot and died.\n"<< std::endl;
}

void 	Zombie::announce()
{
	std::cout << "\t" << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombie(std::string name)
{
	this->_name = name;
}

void	Zombie::newZombieAnnounce()
{
	std::cout << _name << " shouted..." << std::endl;
	announce();
	std::cout << "Will you save Armindo..." << std::endl;
}
