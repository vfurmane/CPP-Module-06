/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:09:55 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/04 11:09:09 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

void	print_usage_message(void)
{
	std::cout << "Scalar conversion" << std::endl;
	std::cout << std::endl;
	std::cout << "Usage:" << std::endl;
	std::cout << "\tconvert <literal>" << std::endl;
}

void	print_special(const std::string &literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << literal << "f" << std::endl;
	std::cout << "double: " << literal << std::endl;
}

void	identify_type(const std::string &literal)
{
	if ((literal[0] >= '0' && literal[0] <= '9')
			|| (literal[0] == '-' && literal[1] >= '0' && literal[1] <= '9'))
	{
		if (literal.find(".") == std::string::npos)
		{
			int	nbr = atoi(literal.c_str());
			std::cout << "char: " << static_cast<char>(nbr) << std::endl;
			std::cout << "int: " << nbr << std::endl;
			std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
		}
		else
		{
			double	nbr = atof(literal.c_str());
			if (literal[literal.length() - 1] == 'f')
			{
				std::cout << "char: " << static_cast<char>(nbr) << std::endl;
				std::cout << "int: " << static_cast<int>(nbr) << std::endl;
				std::cout << "float: " << static_cast<float>(nbr) << (static_cast<int>(nbr) == static_cast<float>(nbr) ? ".0" : "") << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(nbr) << (static_cast<int>(nbr) == static_cast<double>(nbr) ? ".0" : "") << std::endl;
			}
			else
			{
				std::cout << "char: " << static_cast<char>(nbr) << std::endl;
				std::cout << "int: " << static_cast<int>(nbr) << std::endl;
				std::cout << "float: " << static_cast<float>(nbr) << (static_cast<int>(nbr) == static_cast<float>(nbr) ? ".0" : "") << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(nbr) << (static_cast<int>(nbr) == static_cast<double>(nbr) ? ".0" : "") << std::endl;
			}
		}
	}
	else if (literal.length() == 1)
	{
		char	nbr = literal[0];
		std::cout << "char: " << nbr << std::endl;
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
		std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
	}
	else if (literal == "-inf" || literal == "-inff")
		print_special("-inf");
	else if (literal == "+inf" || literal == "+inff")
		print_special("+inf");
	else if (literal == "nan" || literal == "nanf")
		print_special("nan");
	else
	{
		std::cerr << "Impossible conversion..." << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_usage_message();
		return 1;
	}
	identify_type(argv[1]);
	return 0;
}
