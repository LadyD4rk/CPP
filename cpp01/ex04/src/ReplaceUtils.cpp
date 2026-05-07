/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceUtils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:54:44 by jobraga-          #+#    #+#             */
/*   Updated: 2026/05/07 15:56:52 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	searchAndReplace(std::string content, std::string s1, std::string s2)
{
	std::string		result;
	size_t			i = 0;

	while(i < content.size())
	{
		if (content.substr(i, s1.size()) == s1)
		{
			result += s2;
			i += s1.size();
		}
		else
		{
			result += content[i];
			i++;
		}
	}
	return (result);
}
