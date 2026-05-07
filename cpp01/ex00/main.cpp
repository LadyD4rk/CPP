/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:38:07 by jobraga-          #+#    #+#             */
/*   Updated: 2026/05/07 17:04:57 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

General 42 decided to start a war...
So he called in two soldiers: Jorge and Armindo.

Jorge shouted...
Jorge: BraiiiiiiinnnzzzZ...
Armindo shouted...
Armindo: BraiiiiiiinnnzzzZ...

Jorge got shot and died.
Armindo asked for help.

Will you save Armindo...
Yes or No?

Yes: Armindo got shot and died.
No: Armindo ran away.
*/

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
	std::cout << "Yes or No?\n-> ";
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
			std::cout << "Armindo ran away\n";
			break;
		}
		else
			std::cout << "wrong answer\n -> ";
	}
	std::cout << "*End History!!!*\n";
	return (0);
}
