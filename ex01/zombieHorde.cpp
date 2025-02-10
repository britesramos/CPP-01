/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 14:56:33 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 16:19:54 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	Zombie*	zombieHorde = new Zombie[N];
	for(int i = 0; i < N; ++i){
		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}