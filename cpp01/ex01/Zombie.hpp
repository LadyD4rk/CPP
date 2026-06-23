/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:25:43 by jobraga-          #+#    #+#             */
/*   Updated: 2026/06/23 17:12:32 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstring>
# include <string>
# include <cstdlib>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	setZombie(std::string name);
		void	announce();

	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif