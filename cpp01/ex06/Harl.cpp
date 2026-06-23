/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:51:57 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 18:23:36 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is ready to complain!" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl has nothing more to complain about." << std::endl;
}

void	Harl::debug()
{
	std::cout << "Harl: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-";
	std::cout << "ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "Harl: I cannot believe adding extra bacon costs more money. You didn’t put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "Harl: I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years, whereas you started working here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "Harl: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::filter(int i)
{
	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
		{
			error();
			break ;	
		}
		default:
			std::cout << "Invalid Level." << std::endl;
	}
}
