/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/17 17:40:16 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/06 13:07:58 by sramos        ########   odam.nl         */
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

Harl::levels	Harl::stoenum(std::string level){
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; ++i){
		if (array[i] == level)
			return static_cast<Harl::levels>(i);
	}
	return static_cast<Harl::levels>(-1);;
}

void Harl::complain(std::string level){
	
	switch (stoenum(level)){
		case (Harl::levels::DEBUG):
			this->debug();
			// fallthrough
		case (Harl::levels::INFO):
			this->info();
			// fallthrough
		case (Harl::levels::WARNING):
			this->warning();
			// fallthrough
		case (Harl::levels::ERROR):
			this->error();
			// fallthrough
		default:
			std::cout << "Couldn't find your complain in my list of complains." << std::endl;
	}
}