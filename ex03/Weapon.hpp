/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:07:54 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 13:09:47 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string	getType();
		void setType(std::string type);
};
#endif