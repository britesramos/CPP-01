/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/07 18:34:17 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 15:51:59 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name(""){
	std::cout << "Zombie Deafult Constructor." << std::endl;
}

Zombie::Zombie(std::string name): name(name){
	std::cout << "Zombie Constructor: " << this->name << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie Destructor: " << this->name << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}

void	Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
