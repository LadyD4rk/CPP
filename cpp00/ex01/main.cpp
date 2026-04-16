/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:05:35 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/16 04:06:21 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	PhoneBook	book;
	book.Get_All();

	while (1)
	{
		std::string		cmd;
		std::cout << "Comand: ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		for(int i = 0; cmd[i]; i++)
			cmd[i] = (char)toupper(cmd[i]);
		if (!strcmp(cmd.c_str(), "ADD"))
			book.add();
		if (!strcmp(cmd.c_str(), "SEARCH"))
			book.search();
		if (!strcmp(cmd.c_str(), "EXIT"))
			break ;
	}
	return (0);
}
