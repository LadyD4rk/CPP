/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:05:35 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 17:06:36 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(int ac, char **av)
{
	PhoneBook	book;
	book.getAll();

	if (ac != 1)
		return (0);
	(void)av;
	std::cout << "	*Welcome To Your Phonebook*" << std::endl;
	std::cout << "Valid commands:" << std::endl;
	std::cout << "	ADD — (add contacts to the phonebook)." << std::endl;
	std::cout << "	SEARCH — (search contacts in the phonebook)" << std::endl;
	std::cout << "	EXIT — (exit the phonebook)." << std::endl;
	while (1)
	{
		std::string		cmd;
		std::cout << "->";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		for(int i = 0; cmd[i]; i++)
			cmd[i] = (char)toupper(cmd[i]);
		if (!strcmp(cmd.c_str(), "ADD"))
			book.add();
		else if (!strcmp(cmd.c_str(), "SEARCH"))
			book.search();
		else if (!strcmp(cmd.c_str(), "EXIT"))
			break ;
		else
			std::cout << "ERROR: Invalid Comand!" << std::endl;
	}
	std::cout << "	*Phonebook closed*" << std::endl;
	return (0);
}