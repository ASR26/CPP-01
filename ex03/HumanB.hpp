/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:16:32 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 13:45:38 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon	*_weapon;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setName(std::string name);
	std::string getName();
	void	setWeapon(Weapon &weapon);
	std::string getWeapon();
};
#endif