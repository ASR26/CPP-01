/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:22:15 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 08:43:29 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed\n";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}