/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/17 17:35:42 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/17 18:04:07 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[]){
	Harl obj;
	if (argc == 2){
		obj.complain(argv[1]);
	}
	else
		std::cout << "Valid input: <DEBUG>, <INFO>, <WARNING> or <ERROR>." << std::endl;
}