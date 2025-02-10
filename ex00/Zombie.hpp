/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/07 18:33:07 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 15:23:08 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	private:
		std::string		name;
	public:
		Zombie(std::string name);
		~Zombie();

		void	announce();
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);