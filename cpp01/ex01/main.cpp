/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:26:03 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/21 16:33:29 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* 
General 42 decidiu fazer uma guerra...
E chamou N zombie soldados.
Todos gritaram...
Jorge: BraiiiiiiinnnzzzZ...
Jorge tomou o tiro e morreu.

General 42 decided to start a war...
And called in N zombie soldiers.
They all shouted...
Jorge: BraiiiiiiinnnzzzZ...
Jorge got shot and died.

General 42 decided to start a war...
And called in N zombie soldiers, all named name.
They all shouted...
Jorge: BraiiiiiiinnnzzzZ...

Jorge got shot and died.

*/

int		check_numb(char *number)
{
	for (int i = 0; number[i]; i++)
		if (number[i] < '0' || number[i] > '9')
			return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int		n;
	Zombie	*horde;
	
	(void)ac;
	if (ac != 3 || !check_numb(av[1]))
	{
		std::cerr << "Error: Invalid Parameters.\n";
		return (1);
	}
	else
	{
		n = atoi(av[1]);
		std::cout << "General 42 decided to start a war...\n";
		std::cout << "And called in " << n << " zombie soldiers, all named "
		<< av[2] << ".\nThey all shouted...\n";
		horde = zombieHorde(n, av[2]);
		for (int i = 0; i < n; i++)
			horde[i].announce();
	}
	delete[] horde;
	std::cout << "*End History!!!*\n";
	return (0);
}
