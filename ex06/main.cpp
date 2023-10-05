/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:12:07 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/05 11:08:46 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	(void) argv;
	if (argc != 2)
	{
		std::cout << "Wrong ammount of arguments, just need 1 " << std::endl;
		return (1);
	}
	
	Harl harl = Harl();
	harl.complain(argv[1]);
}