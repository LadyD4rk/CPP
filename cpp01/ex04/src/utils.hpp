/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobraga- <jobraga-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:55:49 by jobraga-          #+#    #+#             */
/*   Updated: 2026/05/07 15:56:19 by jobraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>
# include <fstream>
# include <iostream>

std::string	contentFile(char *namefile);
void		newFile(char *name, std::string content);
std::string	searchAndReplace(std::string content, std::string s1, std::string s2);

#endif