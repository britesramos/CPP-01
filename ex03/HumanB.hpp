/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:47:14 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/13 13:50:36 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#pragma once

class HumanB
{
	private:
		std::string name;
		Weapon* weaponType;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon& weaponType); 
};
