/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 23:37:46 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 16:59:18 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::initCheck()
{
	check = false;
}

void	Contact::setFirst(std::string name)
{
	_firstname = name;
}

void	Contact::setLast(std::string name)
{
	_lastname = name;
}

void	Contact::setNick(std::string name)
{
	_nickname = name;
}

void	Contact::setNumber(std::string name)
{
	_phonenum = name;
}

void	Contact::setDarkSecret(std::string name)
{
	_darksecret = name;
}

void	Contact::setCheck()
{
	check = true;
}

std::string	Contact::getFirst()
{
	return (_firstname);
}

std::string	Contact::getLast()
{
	return (_lastname);
}

std::string	Contact::getNick()
{
	return (_nickname);
}

std::string	Contact::getPhone()
{
	return (_phonenum);
}

std::string	Contact::getDarkSecret()
{
	return (_darksecret);
}

bool	Contact::getCheck()
{
	return (check);
}
