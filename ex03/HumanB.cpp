/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:50:54 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/06 14:20:47 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
	std::cout << "Human B Default Constructor." << std::endl;
}

HumanB::HumanB(std::string name): name(name){
	this->weaponType = nullptr; //Thats why we use a pointer in the case of HumanB.
	//This way we can initialize it to null. References do not allow that.
	std::cout << "Human B Constructor." << std::endl;
}

HumanB::~HumanB(){
	std::cout << "Human B Destructor." << std::endl;
}

void HumanB::attack(){
	if (this->weaponType != nullptr)
		std::cout << this->name << " attacks with their " << this->weaponType->getType() << std::endl;
	else
		return;
}

void HumanB::setWeapon(Weapon& weaponType){
	this->weaponType = &weaponType;
}
