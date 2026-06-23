/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:02:53 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 18:20:55 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
/* 	int i = 2;
	int &ref1= i;
	int &ref2 = 0; */
	
    std::string string  = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "Variable Brain address:" << &string << std::endl;
    std::cout << "* address:" << stringPTR << std::endl;
    std::cout << "& address:" << &stringREF << std::endl;
	std::cout << std::endl;
    
    std::cout << "Variable Brain value:" << string << std::endl;
    std::cout << "* value:" << *stringPTR << std::endl;
    std::cout << "& value:" << stringREF << std::endl;
	return (0);
}

/* int	main()
{
	int		idade = 22;
	int		&refe = idade;

	std::cout << "valor = " << idade << std::endl;
	std::cout << "valor = " << refe << std::endl;

	refe = 27;
	std::cout << "valor = " << idade << std::endl;
	std::cout << "valor = " << refe << std::endl;
	
	std::cout << "endereço = " << idade << std::endl;
	std::cout << "endereço = " << refe << std::endl;
} */
