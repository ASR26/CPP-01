/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:12:07 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/06 08:27:03 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	(void) argv;
	if (argc != 2)
	{
		std::cout << "Wrong amount of arguments, just need 1 " << std::endl;
		return (1);
	}
	
	Harl harl = Harl();
	harl.complain(argv[1]);
}