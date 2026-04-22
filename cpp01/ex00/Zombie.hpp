/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:38:30 by jobraga-          #+#    #+#             */
/*   Updated: 2026/04/21 14:25:37 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstring>
# include <string>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	setZombie(std::string name);
		void	newZombieAnnounce();
		void	announce();

	private:
		std::string	name;
};

void 	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif