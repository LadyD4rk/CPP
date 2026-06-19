/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:20:53 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/19 11:37:57 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/* int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
 	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	(void)meta;
	delete j;
	delete i;

	return 0;
} */

int	main()
{
	std::cout << BLUE << "--- TESTE DE POLIMORFISMO ---" << WHITE << std::endl;
	const	Animal* animal = new Animal();
	const	Animal* dog = new Dog();
	const	Animal* cat = new Cat();

	(void)dog;
	(void)cat;
	std::cout << "Type: " << animal->getType() << std::endl;
	std::cout << "Sound: ";
	animal->makeSound();
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Sound: ";
	dog->makeSound();
	std::cout << "Type: " << cat->getType() << std::endl;
	std::cout << "Sound: ";
	cat->makeSound();

	std::cout << BLUE << "--- TESTE DE CLASSE ---" << WHITE << std::endl;
	{
		Dog	dog1;
		Cat	cat1;
	}

	std::cout << BLUE << "--- TESTE DE TYPE ---" << WHITE << std::endl;
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;
	
	

	return 0;
}