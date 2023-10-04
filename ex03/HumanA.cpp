/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:16:36 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 13:48:33 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

std::string HumanA::getWeapon()
{
	return this->_weapon.getType();
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

std::string HumanA::getName()
{
	return (this->_name);
}

HumanA::~HumanA()
{
}