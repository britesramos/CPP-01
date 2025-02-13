/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:54:59 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/13 13:38:34 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): type(""){
	std::cout << "Weapon Default Constructor." << std::endl;
}

Weapon::Weapon(std::string weaponType): type(weaponType){
	std::cout << "Weapon Constructor." << std::endl;
}

Weapon::~Weapon(){
	std::cout << "Weapon Destructor." << std::endl;
}

const std::string& Weapon::getType(){
	return (this->type);
}

void	Weapon::setType(std::string newType){
	this->type = newType;
}