/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:40:56 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/06 11:44:17 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void) : Base()
{
}

C::~C(void)
{
}

C::C(const C &obj) : Base(obj)
{
	*this = obj;
}

C	&C::operator=(const C &rhs)
{
	(void)rhs; /* ===== DELETE ===== */
	return *this;
}
