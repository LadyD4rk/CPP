/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 23:37:46 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/20 12:20:02 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::Init_Check()
{
	check = false;
}

void	Contact::Set_First(std::string name)
{
	first_name = name;
}

void	Contact::Set_Last(std::string name)
{
	last_name = name;
}

void	Contact::Set_Nick(std::string name)
{
	nickname = name;
}

void	Contact::Set_Number(std::string name)
{
	phonenum = name;
}

void	Contact::Set_DarkSecret(std::string name)
{
	darksecret = name;
}

void	Contact::Set_Check()
{
	check = true;
}

std::string	Contact::Get_First()
{
	return (first_name);
}

std::string	Contact::Get_Last()
{
	return (last_name);
}

std::string	Contact::Get_Nick()
{
	return (nickname);
}

std::string	Contact::Get_Phone()
{
	return (phonenum);
}

std::string	Contact::Get_Dark()
{
	return (darksecret);
}

bool	Contact::Get_Check()
{
	return (check);
}
