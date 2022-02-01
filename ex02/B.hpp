/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:40:06 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/01 08:56:47 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B : public Base
{
	public:
		B(void);
		~B(void);
		B(const B &obj);

		B			&operator=(const B &rhs);

		static Base	*build(void);
};

#endif
