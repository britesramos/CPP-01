/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/17 15:45:56 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/20 13:41:16 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#pragma once

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();

	public:
		Harl();
		~Harl();

		enum struct levels {
			DEBUG,
			INFO,
			WARNING,
			ERROR
		};

		levels		stoenum(std::string level);
		void	complain(std::string level);
};