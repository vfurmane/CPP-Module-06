/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:35:05 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/07 10:42:02 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) : Base()
{
}

A::~A(void)
{
}

A::A(const A &obj) : Base(obj)
{
	*this = obj;
}

A	&A::operator=(const A &rhs)
{
	(void)rhs; /* ===== DELETE ===== */
	return *this;
}

Base	*A::build(void)
{
	return new A;
}
