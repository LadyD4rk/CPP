/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 13:58:52 by jobraga-          #+#    #+#             */
/*   Updated: 2026/08/01 18:58:51 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_HPP
# define FRAPTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define GREEN "\033[1;32m"
# define WHITE "\033[0m"

class FrapTrap : public ClapTrap
{
	public:
		FrapTrap();
		FrapTrap(std::string name);
		FrapTrap(const FrapTrap &other);
		FrapTrap &operator=(const FrapTrap &other);
		~FrapTrap();
		void	attack(const std::string& target);
		void	highFivesGuys();
		int		getAttack();
		int		getEnergy();
		std::string	getName();
	private:

};

#endif
