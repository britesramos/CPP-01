/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/17 17:40:16 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/17 18:00:41 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){

}

void Harl::debug(){
	std::cout << "DEBUG" << std::endl;
}

void Harl::info(){
	std::cout << "INFO" << std::endl;
}

void Harl::warning(){
	std::cout << "WARNING" << std::endl;
}

void Harl::error(){
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level){
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcPtr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for(int i = 0; i < 4; ++i){
		if (array[i] == level){
			while (i < 4){
				(this->*funcPtr[i])();
				++i;
			}
			return ;
		}
	}
}