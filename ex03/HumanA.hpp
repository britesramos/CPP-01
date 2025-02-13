/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:44:46 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/13 13:54:24 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#pragma once

class HumanA
{
	private:
		std::string name;
		Weapon& weaponType;

	public:
		// HumanA();
		HumanA(std::string name, Weapon& weaponType);
		~HumanA();

		void	attack();
		
};
