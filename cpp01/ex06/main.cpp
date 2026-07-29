/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:46:17 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/29 15:54:52 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	word;

	if (ac != 2)
	{
		std::cout << "ERROR: Invalid Parameters." << std::endl;
		return (1);
	}
	harl.filter(av[1]);
	return (0);
}
