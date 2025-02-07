/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/07 18:33:07 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/07 18:42:12 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string		name;
	public:
		Zombie();
		~Zombie();

		void	annouce();
		Zombie *newZombie(std::string name);
		void	randomChump(std::string name);
};
