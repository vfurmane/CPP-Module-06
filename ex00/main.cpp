/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:09:55 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/05 11:39:00 by vfurmane         ###   ########.fr       */
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

bool	is_a_number(const std::string &str)
{
	int						i = 0;
	int						str_length = str.length();
	bool					dot_encountered = false;

	if (str[i] == '-')
		i++;
	while (i < str_length)
	{
		if (str[i] == 'f' && i + 1 == str_length)
			return true;
		if ((!isdigit(str[i]) && str[i] != '.') || (str[i] == '.' && dot_encountered))
			return false;
		if (str[i] == '.')
			dot_encountered = true;
		i++;
	}
	return true;
}

void	identify_type(const std::string &literal)
{
	if (is_a_number(literal))
	{
		double	nbr = atof(literal.c_str());

		std::cout << "char: " << static_cast<char>(nbr) << std::endl;
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
		std::cout << "float: " << static_cast<float>(nbr) << (static_cast<int>(nbr) == static_cast<float>(nbr) ? ".0" : "") << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(nbr) << (static_cast<int>(nbr) == static_cast<double>(nbr) ? ".0" : "") << std::endl;
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
