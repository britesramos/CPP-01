/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 10:38:39 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 14:51:32 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie* NewZombie;

	randomChump("STACK");
	NewZombie = newZombie("HEAP");
	NewZombie->announce();
	delete(NewZombie);
}