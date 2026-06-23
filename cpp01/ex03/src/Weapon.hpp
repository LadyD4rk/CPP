/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:22:06 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 17:13:39 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <cstring>
# include <string>
# include <cstdlib>

class Weapon{
	public:
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string new_type);
		std::string	getType();

	private:
		std::string		_type;
};

#endif