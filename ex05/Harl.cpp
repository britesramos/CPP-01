/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/17 17:40:16 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/06 13:10:22 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){

}

void Harl::debug(){
	std::cout << "DEBUG:" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "INFO" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "WARNING" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "ERROR" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcPtr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for(int i = 0; i < 4; ++i){
		if (array[i] == level){
			(this->*funcPtr[i])();
			return ;
		}
	}
}