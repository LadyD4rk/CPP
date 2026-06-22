/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:34:11 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/22 19:07:53 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	std::cout << RED << "--- BASIC TEST ---" << WHITE << std::endl;
	Dog		dog;

	dog.createIdeas();
	dog.getBrainDog();

	std::cout << RED << "\n--- COPY TEST DOG ---" << WHITE << std::endl;
	Dog		dog1(dog);

	dog.setBrainDog(0, "I am tired...");
	dog.getBrainDog();
	std::cout << std::endl;
	dog1.getBrainDog();

	std::cout << RED << "\n--- COPY TEST CAT ---" << WHITE << std::endl;
	Cat		cat;
	cat.createIdeas();
	Cat		cat1(cat);
	cat.setBrainCat(0, "I am tired...");
	cat.getBrainCat();
	std::cout << std::endl;
	cat1.getBrainCat();

	return 0;
}
