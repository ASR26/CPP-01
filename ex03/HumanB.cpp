/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:16:36 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 13:53:21 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string HumanB::getWeapon()
{
	if (this->_weapon == NULL)
		return ("");
	return this->_weapon->getType();
}

void	HumanB::attack()
{
	if (this->getWeapon().empty())
		std::cout << this->getName() << " attacks without a weapon" << std::endl;
	else
		std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

std::string HumanB::getName()
{
	return (this->_name);
}

HumanB::~HumanB()
{
}