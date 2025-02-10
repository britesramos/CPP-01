/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:44:46 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 18:30:55 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class HumanA
{
	private:
		std::string name;
		std::string weaponType;

	public:
		HumanA();
		HumanA(std::string name, std::string weaponType);
		~HumanA();

		void	attack();
		
};
