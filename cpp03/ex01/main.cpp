/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:18:30 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/16 14:14:02 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	std::cout << RED << "--- BASIC TEST ---" << WHITE << std::endl;
	{
		ScavTrap	armindo("Armindo");
	}

	std::cout << RED << "\n--- ATTACK TEST ---" << WHITE << std::endl;
	ScavTrap	beto("Beto");
	ScavTrap	clovis("Clóvis");
	beto.attack("Clovis");
	clovis.takeDamage((unsigned int)beto.getAttack());

	std::cout << RED << "\n--- ENERGY TEST ---" << WHITE << std::endl;
	ScavTrap	duarte("Duarte");
	for (int i = 0; i <= 51; i++)
		duarte.beRepaired(1);

	std::cout << RED << "\n--- DEATH TEST ---" << WHITE << std::endl;
	beto.takeDamage(101);
	beto.guardGate();

	std::cout << RED << "\n--- COPY TEST ---" << WHITE << std::endl;
	{
		ScavTrap	rogério("Rogério");
		ScavTrap	rogériojr(rogério);
		rogério.attack("someone");
		rogériojr.attack("someone");
	}
	
	std::cout << RED << "\n--- GUARD TEST ---" << WHITE << std::endl;
	clovis.guardGate();
	std::cout << "	" << "(" << clovis.getEnergy() << ") - Energy points of ";
	std::cout << clovis.getName() << "." << std::endl;
	clovis.guardGate();
	std::cout << "	" << "(" << clovis.getEnergy() << ") - Energy points of ";
	std::cout << clovis.getName() << "." << std::endl;
	
	std::cout << std::endl;
	
}
