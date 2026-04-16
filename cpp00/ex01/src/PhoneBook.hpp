/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:29:51 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/16 04:03:55 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iostream>
# include <cstring>
# include <string>
# include <cstdlib>
# include <iomanip>

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

class PhoneBook
{
	public:
		void		add();
		void		search();
		void		Get_All();
		std::string GetInput(std::string str);
		void		createPhoneBook();
		void		printInformation();
	private:
		Contact		contact[MAX_CONTACTS];
		int			num_cont;
};

#endif