/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:12:27 by jobraga-          #+#    #+#             */
/*   Updated: 2026/07/02 02:46:12 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int ac, char **av)
{
	std::string		old_str;
	std::string		new_str;
	std::string		content;
	std::string		replace;
	
	if (ac != 4)
		return (1);
	old_str = av[2];
	new_str = av[3];
	content = contentFile(av[1]);
	if (content.empty())
	{
		return (0);
	}
	replace = searchAndReplace(content, old_str, new_str);
	newFile(av[1], replace);
	return (0);
}
