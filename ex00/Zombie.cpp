/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/07 18:34:17 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/07 18:39:10 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	
}

Zombie::~Zombie(){
	std::cout << "Zombie Destructor: " << this->name << std::endl;
}

void	Zombie::annouce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}