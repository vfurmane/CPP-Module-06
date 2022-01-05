/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:36:30 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/05 13:51:26 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

int	main(void)
{
	Data		data;
	std::cout << "The address of data is " << &data << std::endl;

	uintptr_t	ptr = serialize(&data);
	std::cout << "The address, as a decimal integer, of data is " << ptr << std::endl;
	return 0;
}
