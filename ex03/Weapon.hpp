/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:41:48 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/13 13:39:32 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		Weapon(std::string weaponType);
		~Weapon();
		
		const std::string& getType();
		void	setType(std::string newType);
};
