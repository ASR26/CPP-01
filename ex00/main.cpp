/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:22:13 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/03 08:45:16 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie *zombie = newZombie("Zombie puntero");
	zombie->announce();
	randomChump("Zombie random");
	delete(zombie);
}