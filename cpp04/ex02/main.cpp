/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:20:53 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/22 20:26:48 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	std::cout << GREEN << "--- BASIC TEST ---" << WHITE << std::endl;
	Dog		dog;
	Cat		cat;
	//Animal	a;

	std::cout << "Type: " << dog.getType() << std::endl;
	std::cout << "Sound: ";
	dog.makeSound();
	std::cout << "Type: " << cat.getType() << std::endl;
	std::cout << "Sound: ";
	cat.makeSound();

	return 0;
}
