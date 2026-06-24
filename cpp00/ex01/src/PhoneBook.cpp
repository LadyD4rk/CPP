/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:47:52 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/24 15:02:40 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		checkNumb(std::string number)
{
	for (int i = 0; number[i]; i++)
		if (number[i] < '0' || number[i] > '9')
			return (0);
	return (1);
}

std::string	getInputNumber(std::string str)
{
	std::string	input;
	
	std::cout << str;
	if (!std::getline(std::cin, input))
		if (std::cin.eof())
			exit(0);
	if (checkNumb(input) == 0)
		return "";
	return input;
}

std::string PhoneBook::getInput(std::string str)
{
	std::string input;

	std::cout << str;
	if (!std::getline(std::cin, input))
		if (std::cin.eof())
			exit(0);
	if (input.empty())
		return "";
	return input;
}

void	PhoneBook::getAll()
{
	num_cont = 0;
	for (int i = 0; i < MAX_CONTACTS; i++)
		contact[i].initCheck();
}

void	PhoneBook::add()
{
 	std::string	_firstname = getInput("	>First Name: ");
	std::string	_lastname = getInput("	>Last Name: ");
	std::string	_phonenumber = getInputNumber("	>Phone Number: ");
	std::string	_nickname = getInput("	>Nickname: ");
	std::string	_darksecret = getInput("	>Dark Secret: ");

	if (_phonenumber.empty() || _firstname.empty() || _lastname.empty()
		|| _nickname.empty() || _darksecret.empty())
	{
		std::cout << "ERROR: Contact contains invalid data." << std::endl;
		return ;
	}
	contact[num_cont % MAX_CONTACTS].setFirst(_firstname);
	contact[num_cont % MAX_CONTACTS].setLast(_lastname);
	contact[num_cont % MAX_CONTACTS].setNick(_nickname);
	contact[num_cont % MAX_CONTACTS].setNumber(_phonenumber);
	contact[num_cont % MAX_CONTACTS].setDarkSecret(_darksecret);
	contact[num_cont % MAX_CONTACTS].setCheck();
	num_cont++;
}

std::string	createString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::createPhoneBook()
{
	std::cout << "|—————————————————————————————————————|" << std::endl;
	std::cout << "|              PHONEBOOK              |" << std::endl;
	std::cout << "|—————————————————————————————————————|" << std::endl;
	std::cout << "|" << " idx" << "|" << std::setw(10) << "FirstName"
			<< "|" << std::setw(10) << "LastName" << "|" << std::setw(10)
			<< "NickName" << "|"<< std::endl;
	for (int i = 0; contact[i].getCheck() == true && i < MAX_CONTACTS; i++)
	{
		std::cout << "|   " << i + 1;
		std::cout << "|" << std::setw(10) << createString(contact[i].getFirst());
		std::cout << "|" << std::setw(10) << createString(contact[i].getLast());
		std::cout << "|" << std::setw(10) << createString(contact[i].getNick());
		std::cout << std::endl;
	}
	std::cout << "|—————————————————————————————————————|" << std::endl;
}

void	PhoneBook::printInformation(int i)
{
	std::cout << "	>FirstName:" << std::endl;
	std::cout << "		- " << contact[i].getFirst() << std::endl;
	std::cout << "	>LastName: " << std::endl;
	std::cout << "		- " << contact[i].getLast() << std::endl;
	std::cout << "	>Nickname:" << std::endl;
	std::cout << "		- " << contact[i].getNick() << std::endl;
	std::cout << "	>Phone Number:" << std::endl;
	std::cout << "		- " << contact[i].getPhone() << std::endl;
	std::cout << "	>Dark Secret:" << std::endl; 
	std::cout << "		- " << contact[i].getDarkSecret() << std::endl;
}

void	PhoneBook::search()
{
	std::string	num;
	int			i;

	if (num_cont == 0)
	{
		std::cout << "There are no contacts in the phonebook yet." << std::endl;
		return ;
	}
	createPhoneBook();
	while (1)
	{
		std::cout << "	>Number: ";
		if (!std::getline(std::cin, num))
			if (std::cin.eof())
				exit(0);
		if (!checkNumb(num))
			std::cout << "	ERROR: Invalid Character." << std::endl;
		else
		{
			i = atoi(num.c_str()) - 1;
			if (i > 7 || i < 0)
				std::cout << "	ERROR: Invalid Number." << std::endl;
			else
				break;
		}
	}
	if (contact[i].getCheck() == false)
		std::cout << "	ERROR: That contact doesn't exist." << std::endl;
	else
		printInformation(i);
}
