/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 13:56:11 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/13 19:50:00 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[]){
	if (argc == 4){
		std::fstream file(argv[1]);
		if (!file.is_open()){
			std::cout << "Error: Couln'd open file." << std::endl;
		}
		std::string line;
		while (getline(file, line)) { // Read line by line
            std::cout << line << std::endl; // Print to console
        }
		file.close();
	}
	else
		std::cout << "Please provide: <filename> <string1> <string2>." << std::endl;
	//input: filename + str1 + str2.
	//open the file <filename>
	//copy content to a new file. <filename>.replace
	//replace every ocurrence of str1 with str2
	//replace is forbidden
}
