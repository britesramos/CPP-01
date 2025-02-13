/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:53:46 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/13 13:54:57 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(): name(""), weaponType(){
// 	std::cout << "Human A Default Constructor." << std::endl;
// }

HumanA::HumanA(std::string name, Weapon& weaponType): name(name), weaponType(weaponType){
	std::cout << "Human A Constructor." << std::endl;
}

HumanA::~HumanA(){
	std::cout << "Human A Destructor." << std::endl;
}

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weaponType.getType() << std::endl;
}