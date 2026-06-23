/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 23:36:49 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 16:59:25 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstring>
# include <string>
# include <cstdlib>

class Contact
{
	public:
		void	initCheck();
		void	setFirst(std::string name);
		void	setLast(std::string name);
		void	setNick(std::string name);
		void	setNumber(std::string name);
		void	setDarkSecret(std::string name);
		void	setCheck();
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getPhone();
		std::string	getDarkSecret();
		bool		getCheck();

	private:
		std::string	_firstname;
		std::string _lastname;
		std::string _nickname;
		std::string	_phonenum;
		std::string _darksecret;
		bool		check;
};

#endif