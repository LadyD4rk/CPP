/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:02:53 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/29 11:17:23 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string string  = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "Variable \"Brain\" address:" << &string << "\n";
    std::cout << "Pointer address:" << stringPTR << "\n";
    std::cout << "Reference address:" << &stringREF << "\n\n";
    
    std::cout << "Variable \"Brain\" value:" << string << "\n";
    std::cout << "Pointer value:" << stringPTR << "\n";
    std::cout << "Reference value:" << stringREF << "\n";
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
