/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:50:54 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 18:38:58 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
	std::cout << "Human B Constructor." << std::endl;
}

HumanB::HumanB(std::string name): name(name){

}

HumanB::~HumanB(){
	std::cout << "Human B Destructor." << std::endl;
}

void HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->weaponType << std::endl;
}

void HumanB::setWeapon(std::string type){
	this->weaponType = type;
}
