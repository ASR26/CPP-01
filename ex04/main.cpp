/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:19:04 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/04 13:03:45 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "There must be only 3 arguments" << std::endl;
		return (1);
	}
	std::string	line;
	std::string	from = argv[2];
	std::string	to = argv[3];
	std::size_t	pos;
	std::ifstream	infile;
	std::ofstream	outfile;
	if (!from.compare(to.c_str()))
	{
		std::cout << "String to change and new string cannot be the same" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	outfile.open((std::string)argv[1] + ".replace");
	if (infile.is_open())
	{
		while (std::getline(infile, line))
		{
			pos = line.find(from);
			while (pos != std::string::npos)
			{
				line.erase(pos, from.length());
				line.insert(pos, to);
				pos = line.find(from);
			}
			outfile << line << std::endl;
		}
		infile.close();
		if (outfile.is_open())
			outfile.close();
			return (0);
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
		return (1);
	}
}