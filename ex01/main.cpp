/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:36:30 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/05 14:18:15 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

int	main(void)
{
	Data		data;
	std::cout << "The address of data is " << &data << std::endl;

	data.nbr = 42;
	data.chr = '*';
	data.ptr = &data.nbr;
	std::cout << "data is " << data << std::endl;

	uintptr_t	ptr = serialize(&data);
	std::cout << "The address, as a decimal integer, of data is " << ptr << std::endl;

	Data		data_copy = *deserialize(ptr);
	std::cout << "The address of data is now " << &data_copy << std::endl;
	std::cout << "data is now " << data_copy << std::endl;
	return 0;
}
