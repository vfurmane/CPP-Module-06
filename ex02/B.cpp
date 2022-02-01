/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:40:16 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/01 08:56:40 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) : Base()
{
}

B::~B(void)
{
}

B::B(const B &obj) : Base(obj)
{
	*this = obj;
}

B	&B::operator=(const B &rhs)
{
	(void)rhs; /* ===== DELETE ===== */
	return *this;
}

Base	*B::build(void)
{
	return new B;
}
