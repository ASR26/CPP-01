/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:22:13 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 09:09:06 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
int	main(void){
	Zombie *horde = zombieHorde(4, "pepe");
	int i = 0;
	while (i < 4)
	{
		horde[i].announce();
		i++;
	}
	delete[](horde);
}