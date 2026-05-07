/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:35:21 by jobraga-          #+#    #+#             */
/*   Updated: 2026/05/07 17:43:18 by jobraga-         ###   ########.fr       */
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
	std::cout << "ketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "Harl: I cannot believe adding extra bacon costs more money. You didn’t put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "Harl: I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years, whereas you started working here just last month.\n";
}

void	Harl::error()
{
	std::cout << "Harl: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	std::string tags[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*actions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i = 0; i < 4; i++)
	{
		if (level == tags[i])
		{
			(this->*actions[i])();
			break;
		}
	}
}

/* Traduções
	! CONSTRUCTOR:
"Harl está pronto para reclamar!"
	! DEBUG:
"Eu adoro ter bacon extra no meu hambúrguer 7XL-queijo-duplo-triple-pickle-especial-ketchup. Eu adoro mesmo!"
	! INFO:
"Não consigo acreditar que adicionar bacon extra custa mais dinheiro. Não puseste bacon suficiente
no meu hambúrguer! Se tivesses posto, não estaria a pedir mais!"
	! WARNING:
"Acho que mereço ter bacon extra de graça. Venho aqui há anos, enquanto tu começaste a trabalhar aqui no mês passado."
	! ERROR:
"Isto é inaceitável! Quero falar com o gerente agora." 
	! DESTRUCTOR:
"Harl não tem mais nada de que reclamar." */
