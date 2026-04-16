/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 23:36:49 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/16 02:03:04 by jobraga-         ###   ########.fr       */
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
		void	Init_Check();
		void	Set_First(std::string name);
		void	Set_Last(std::string name);
		void	Set_Nick(std::string name);
		void	Set_Number(std::string name);
		void	Set_DarkSecret(std::string name);
		void	Set_Check();
		std::string	Get_First();
		std::string	Get_Last();
		std::string	Get_Nick();
		std::string	Get_Phone();
		bool		Get_Check();

	private:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string	phonenum;
		std::string darksecret;
		bool		check;
};

#endif