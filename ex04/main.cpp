/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 13:56:11 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/06 13:58:09 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	print_file(std::string path){
	std::fstream outfile;
	std::string line;
	
	outfile.open(path, std::ios::in);
	while (getline(outfile, line)){
		std::cout << line << std::endl;
	}
	outfile.close();
}

void	replace_method(std::ifstream& infile, std::fstream& outfile, std::string s1, std::string s2){
	
	int	i = 0;
	size_t start = 0;
	std::string line;
	std::string new_line;
	while (getline(infile, line)){
		start = line.find(s1, i);
		while (start != std::string::npos){
			new_line = line.substr(0, start) + s2;
			i = new_line.length();
			if (start + s2.length() < line.length()){
				if (s2.length() > s1.length())
					new_line += line.substr(start + s2.length() - 1);
				else
					new_line += line.substr(start + s1.length());
			}
			line = new_line;
			start = line.find(s1, i);
		}
		i = 0;
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}

int	main(int argc, char *argv[]){
	if (argc != 4){
		std::cout << "Please provide: <filename> <string1> <string2>." << std::endl;
		exit (-1);
	}
	std::ifstream infile;
	std::fstream outfile;
	std::string	infile_path = argv[1];
	std::string outfile_path = infile_path + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (argc == 4 && !s1.empty() && !s2.empty()){
		infile.open(infile_path); //Open infile.
		if (!infile.is_open()){
			std::cout << "Error: Couln'd open infile." << std::endl;
			exit(1);
		}
		outfile.open(outfile_path, std::ios::out); //Create and open outfile.
		if(!outfile){
			std::cout << "Error: Couln't create outfile." << std::endl;
		}
		// std::cout << "------------------INFILE BEFORE MY_REPLACE_METHOD------------------" << std::endl;
		// print_file(infile_path);
		// std::cout << "\n------------------OUTFILE BEFORE MY_REPLACE_METHOD------------------" << std::endl;
		// print_file(outfile_path);
		replace_method(infile, outfile, s1, s2);
		// std::cout << "\n------------------INFILE AFTER MY_REPLACE_METHOD------------------" << std::endl;
		// print_file(infile_path);
		// std::cout << "\n------------------OUTFILE AFTER MY_REPLACE_METHOD------------------" << std::endl;
		// print_file(outfile_path);
	}
	else
		std::cout << "String1 and/or String2 is/are empty." << std::endl;
}
