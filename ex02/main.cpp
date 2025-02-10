/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 16:21:56 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 16:33:08 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){
	std::string brain_text = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain_text;
	std::string& stringREF = brain_text;

	std::cout << "This is the address of brain_text: " << &brain_text << std::endl;
	std::cout << "This is the address of stringPTR: " << stringPTR << std::endl;
	std::cout << "This is the address of stringREF: " << &stringREF << std::endl;

	std::cout << "brain_text value: " << brain_text << std::endl;
	std::cout << "string PTR value: " << *stringPTR << std::endl;
	std::cout << "string REF value: " << stringREF << std::endl;
}