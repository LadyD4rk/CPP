/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileManager.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:28:21 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 18:21:37 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	contentFile(char *namefile)
{
	std::ifstream	file(namefile);
	std::string		content;
	std::string		line;

	if (!file.is_open())
	{
		std::cout << "Error file" << std::endl;
		return (NULL); 
	}
	while (std::getline(file, line))
	{
		content += line;
		content += '\n';
	}
	file.close();
	return (content);
}

void	newFile(char *name, std::string content)
{
	std::string	new_name = name;
	new_name += ".replace";
	
	std::ofstream file(new_name.c_str());
	if (!file.is_open())
	{
		std::cout << "Error file" << std::endl;
		return ; 
	}
	file << content;
	file.close();
}
