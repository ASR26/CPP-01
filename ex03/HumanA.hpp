/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:16:32 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 13:44:24 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon	&_weapon;
public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();
	void	setName(std::string name);
	std::string getName();
	void	setWeapon(Weapon weapon);
	std::string getWeapon();
};
#endif