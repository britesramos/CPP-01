/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:53:46 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 18:31:11 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){
	std::cout << "Human A Constructor." << std::endl;
}

HumanA::HumanA(std::string name, std::string weaponType): name(name), weaponType(weaponType){
	
}

HumanA::~HumanA(){
	std::cout << "Human A Destructor." << std::endl;
}

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weaponType << std::endl;
}