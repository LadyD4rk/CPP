/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:47:52 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/19 11:52:28 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::GetInput(std::string str)
{
	std::string input;

	std::cout << str;
	if (!std::getline(std::cin, input))
		if (std::cin.eof())
			exit(0);
	return input;
}

void	PhoneBook::Get_All()
{
	num_cont = 0;
	for (int i = 0; i < MAX_CONTACTS; i++)
		contact[i].Init_Check();
}

void	PhoneBook::add()
{
 	std::string	First_Name = GetInput("	>First Name: ");
	std::string	Last_Name = GetInput("	>Last Name: ");
	std::string	Nick_Name = GetInput("	>Nickname: ");
	std::string	Phone_Number = GetInput("	>Phone Number: ");
	std::string	DarkSecret = GetInput("	>Dark Secret: ");

	contact[num_cont % MAX_CONTACTS].Set_First(First_Name);
	contact[num_cont % MAX_CONTACTS].Set_Last(Last_Name);
	contact[num_cont % MAX_CONTACTS].Set_Nick(Nick_Name);
	contact[num_cont % MAX_CONTACTS].Set_Number(Phone_Number);
	contact[num_cont % MAX_CONTACTS].Set_DarkSecret(DarkSecret);
	contact[num_cont % MAX_CONTACTS].Set_Check();
	num_cont++;
}

int		check_numb(std::string number)
{
	for (int i = 0; number[i]; i++)
		if (number[i] < '0' || number[i] > '9')
			return (0);
	return (1);
}

std::string	createString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::createPhoneBook()
{
	std::cout << "|————————————————————————————————————————————————|" << std::endl;
	std::cout << "|                   PHONEBOOK                    |" << std::endl;
	std::cout << "|————————————————————————————————————————————————|" << std::endl;
	std::cout << "|" << " idx" << "|" << std::setw(10) << "FirstName"
			<< "|" << std::setw(10) << "LastName" << "|" << std::setw(10)
			<< "Nickname" << "|" << std::setw(10) << "Phone" << "|" << std::endl;
	for (int i = 0; contact[i].Get_Check() == true; i++)
	{
		std::cout << "|   " << i + 1;
		std::cout << "|" << std::setw(10) << createString(contact[i].Get_First());
		std::cout << "|" << std::setw(10) << createString(contact[i].Get_Last());
		std::cout << "|" << std::setw(10) << createString(contact[i].Get_Nick());
		std::cout << "|" << std::setw(10) << createString(contact[i].Get_Phone());
		std::cout << "|\n";
	}
	std::cout << "|————————————————————————————————————————————————|" << std::endl;
}

void	PhoneBook::printInformation(int i)
{
	std::cout << "	>FirstName:\n		- " << contact[i].Get_First() << std::endl;
	std::cout << "	>LastName:\n		- " << contact[i].Get_Last() << std::endl;
	std::cout << "	>NickName:\n		- " << contact[i].Get_Nick() << std::endl;
	std::cout << "	>Phone Number:\n		- " << contact[i].Get_Phone() << std::endl;
	std::cout << "	>Dark Secret:\n		- " << contact[i].Get_Dark() << std::endl;
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
		if (!check_numb(num))
			std::cout << "	ERROR: Invalid Character.\n";
		else
		{
			i = atoi(num.c_str()) - 1;
			if (i > 7 || i < 0)
				std::cout << "	ERROR: Invalid Number.\n";
			else
				break;
		}
	}
	if (contact[i].Get_Check() == false)
		std::cout << "	ERROR: That contact doesn't exist." << std::endl;
	else
		printInformation(i);
}
