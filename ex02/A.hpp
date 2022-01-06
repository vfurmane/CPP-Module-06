/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:39:19 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/06 11:39:30 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

class A : public Base
{
	public:
		A(void);
		~A(void);
		A(const A &obj);

		A	&operator=(const A &rhs);
};

#endif
