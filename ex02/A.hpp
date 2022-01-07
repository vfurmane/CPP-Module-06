/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:39:19 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/07 11:03:52 by vfurmane         ###   ########.fr       */
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

		void	identify(void) const;

		static Base	*build(void);
};

#endif
