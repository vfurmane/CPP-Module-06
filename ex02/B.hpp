/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:40:06 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/07 11:03:52 by vfurmane         ###   ########.fr       */
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

		void	identify(void) const;

		static Base	*build(void);
};

#endif
