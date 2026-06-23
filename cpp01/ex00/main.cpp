/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:38:07 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 17:22:26 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie	*zombie;
	std::string	word;

	if (ac != 1)
		return (1);
	(void)av;
	std::cout << "General 42 decided to start a war.." << std::endl;
	std::cout << "So he called in two zombie soldiers: Jorge and Armindo." << std::endl << std::endl;
	randomChump("Jorge");
	zombie = newZombie("Armindo");
	zombie->newZombieAnnounce();
	std::cout << "Yes or No?" << std::endl;
	std::cout << "-> ";
	while (1)
	{
		std::getline(std::cin, word);
		for(int i = 0; word[i]; i++)
			word[i] = (char)tolower(word[i]);
		if (!strcmp(word.c_str(), "no"))
		{
			delete zombie;
			break;
		}
		else if (!strcmp(word.c_str(), "yes"))
		{
			std::cout << "Armindo ran away" << std::endl;
			break;
		}
		else
		{
			std::cout << "wrong answer" << std::endl;
			std::cout << "-> " << std::endl;

		}
	}
	std::cout << "*End History!!!*" << std::endl;
	return (0);
}

/*
General 42 decidiu fazer uma guerra...
E chamou os dois soldados Jorge e Armindo.
Jorge gritou...
Jorge: BraiiiiiiinnnzzzZ...
Armindo gritou...
Armindo: BraiiiiiiinnnzzzZ...
Jorge tomou o tiro e morreu.
Armindo pediu ajuda. 
Você vai salvar o Armindo...
Yes or No?
Yes: Armindo tomou o tiro e morreu
No: Armindo fugiu.
*/