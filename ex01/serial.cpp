/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:39:24 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/05 14:18:46 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}

std::ostream	&operator<<(std::ostream &os, const Data &obj)
{
	os << "nbr: " << obj.nbr << ", chr: '" << obj.chr << "' -> " << static_cast<int>(obj.chr) << ", ptr: " << obj.ptr;
	return os;
}
