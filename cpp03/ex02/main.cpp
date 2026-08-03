/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:18:30 by jobraga-          #+#    #+#             */
/*   Updated: 2026/08/03 20:54:17 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main( void )
{
	std::cout << GREEN << "--- BASIC TEST ---" << WHITE << std::endl;
	{
		FragTrap	antonio("Antonio");
	}
	std::cout << GREEN << "\n--- ATTACK TEST ---" << WHITE << std::endl;
	FragTrap	cristina("Cristina");
	FragTrap	claudio("Claudio");
	cristina.attack("Claudio");
	claudio.takeDamage((unsigned int)cristina.getAttack());

	std::cout << GREEN << "\n--- ENERGY TEST ---" << WHITE << std::endl;
	FragTrap	daniel("Daniel");
	for (int i = 0; i < 100; i++)
		daniel.beRepaired(2);

	std::cout << GREEN << "\n--- DEATH TEST ---" << WHITE << std::endl;
	cristina.takeDamage(101);
	cristina.highFivesGuys();

	std::cout << GREEN << "\n--- COPY TEST ---" << WHITE << std::endl;
	{
		FragTrap	julia("Julia");
		FragTrap	juliajr(julia);
		julia.attack("someone");
		juliajr.attack("someone");
	}

	std::cout << GREEN << "\n--- HIGH FIVE TEST ---" << WHITE << std::endl;
	claudio.highFivesGuys();
	std::cout << "	(" << claudio.getEnergy() << ") - Energy points of ";
	std::cout << claudio.getName() << "." << std::endl;
	claudio.highFivesGuys();
	std::cout << "	(" << claudio.getEnergy() << ") - Energy points of ";
	std::cout << claudio.getName() << "." << std::endl;

	std::cout << std::endl;

	return (0);
}
