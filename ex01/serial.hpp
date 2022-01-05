/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:42:02 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/05 13:46:56 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

#include <iostream>
#include <stdint.h>

typedef struct s_Data
{
	int		nbr;
	char	chr;
	void	*ptr;
}				Data;

uintptr_t	serialize(Data *ptr);

#endif
