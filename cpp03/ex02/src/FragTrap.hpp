/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:58:52 by jobraga-          #+#    #+#             */
/*   Updated: 2026/08/03 20:54:17 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define GREEN "\033[1;32m"
# define WHITE "\033[0m"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys();
		int		getAttack();
		int		getEnergy();
		std::string	getName();
	private:

};

#endif
