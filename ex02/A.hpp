/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:39:19 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/01 08:56:24 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A : public Base
{
	public:
		A(void);
		~A(void);
		A(const A &obj);

		A			&operator=(const A &rhs);

		static Base	*build(void);
};

#endif
