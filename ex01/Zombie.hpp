/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/07 18:33:07 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 15:47:59 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	private:
		std::string		name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce();
		void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);