/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 15:08:00 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 15:42:40 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie* horde_zombies;

	horde_zombies = zombieHorde(10, "Foo");
	for (int i = 0; i < 10; ++i){
		horde_zombies[i].announce();
	}
	delete[] horde_zombies;
}