/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:35:22 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/05 10:42:09 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::def()
{
	std::cout << "Default message, not a correct option or something." << std::endl;
}

void Harl::complain(std::string level)
{
	void	(Harl::*func[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::def};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 5; i++)
	{
		if (!level.compare(levels[i]))
		{
			(this->*(func[i]))();
			return ;
		}
		if (i == 4)
			(this->*(func[i]))();
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}