/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:18:30 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/16 14:12:05 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	std::cout << BLUE << "--- BASIC TEST ---" << WHITE << std::endl;
	{
		ClapTrap    jorge("Jorge");
	}

	std::cout << BLUE << "\n--- ATTACK TEST ---" << WHITE << std::endl;
	ClapTrap    alice("Alice");
	ClapTrap    bernardo("Bernardo");
	alice.attack("Bernardo");
	bernardo.takeDamage(0);
	bernardo.attack("Alice");
	alice.takeDamage(0);

	std::cout << BLUE << "\n--- REPAIR TEST ---" << WHITE << std::endl;
	alice.beRepaired(3);
	bernardo.beRepaired(4);
	
	std::cout << BLUE << "\n--- ENERGY TEST ---" << WHITE << std::endl;
	ClapTrap    filipe("Filipe");
	for (int i = 0; i < 12; i++)
		filipe.beRepaired(2);

	std::cout << BLUE << "\n--- COPY TEST ---" << WHITE << std::endl;
	{
		ClapTrap    afonso("Afonso");
		ClapTrap    afonsojr(afonso);
		afonso.attack("someone");
		afonsojr.attack("someone");
	}

	std::cout << BLUE << "\n--- DEATH TEST ---" << WHITE << std::endl;
	alice.takeDamage(100);
	alice.beRepaired(1);

	return 0;
}

