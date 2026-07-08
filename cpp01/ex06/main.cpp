/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:46:17 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/02 03:08:00 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	word;
	std::string	options[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;
	
	std::cout << "What level would Harl like to complain at?" << std::endl;
	std::cout << "Options:\n	->DEBUG\n	->INFO\n	->WARNING\n	->ERROR" << std::endl;
	while(1)
	{
		i = 0;
		std::cout << "->";
		std::getline(std::cin, word);
		if (std::cin.eof())
			return (0);
		if (word == "exit")
			break;
		harl.filter(word);
	}
	return (0);
	
}
