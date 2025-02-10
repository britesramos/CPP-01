/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 17:47:14 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/10 18:41:07 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		std::string weaponType;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(std::string type); //Type problem it should be an object from Weapon.
};
