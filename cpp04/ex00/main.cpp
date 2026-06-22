/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:20:53 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/22 19:03:55 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	std::cout << BLUE << "--- POLYMORPHISM TEST ---" << WHITE << std::endl;
	const	Animal* animal = new Animal();
	const	Animal* dog = new Dog();
	const	Animal* cat = new Cat();

	std::cout << "Type: " << animal->getType() << std::endl;
	std::cout << "Sound: ";
	animal->makeSound();
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Sound: ";
	dog->makeSound();
	std::cout << "Type: " << cat->getType() << std::endl;
	std::cout << "Sound: ";
	cat->makeSound();

	std::cout << BLUE << "\n--- CLASS TEST ---" << WHITE << std::endl;
	{
		Dog	dog1;
		Cat	cat1;
	}

	std::cout << BLUE << "\n--- TYPE TEST ---" << WHITE << std::endl;;
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;
	
	std::cout << BLUE << "\n--- ARRAY TEST ---" << WHITE << std::endl;
	Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();
	std::cout << "Sound: ";
	animals[0]->makeSound();
	std::cout << "Sound: ";
	animals[1]->makeSound();
	std::cout << "Sound: ";
	animals[2]->makeSound();
	std::cout << "Sound: ";
	animals[3]->makeSound();

	std::cout << BLUE << "\n--- COPY TEST ---" << WHITE << std::endl;
	{
		Dog	dog2;
		Dog	dog3(dog2);
		Cat	cat2;
		Cat	cat3(cat2);

		std::cout << "Type: " << dog2.getType() << std::endl;
		std::cout << "Type: " << cat2.getType() << std::endl;
		std::cout << "Type: " << dog3.getType() << std::endl;
		std::cout << "Type: " << cat3.getType() << std::endl;
	}

	delete animal;
	delete dog;
	delete cat;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << BLUE << "\n--- WRONG ANIMAL TEST ---" << WHITE << std::endl;
	const WrongAnimal* wrongAnimal = new WrongCat();
	std::cout << "Type: " << wrongAnimal->getType() << std::endl;
	std::cout << "Sound: ";
	wrongAnimal->makeSound();
	delete wrongAnimal;

	return 0;
}
