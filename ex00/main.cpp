/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:09:55 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/03 10:30:37 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_usage_message(void)
{
	std::cout << "Scalar conversion" << std::endl;
	std::cout << std::endl;
	std::cout << "Usage:" << std::endl;
	std::cout << "\tconvert <literal>" << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_usage_message();
		return 1;
	}
	const std::string	literal = argv[1];
	(void)literal; /* ===== DELETE ===== */
	return 0;
}
