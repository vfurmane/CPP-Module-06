/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:41:17 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/07 11:03:52 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class C : public Base
{
	public:
		C(void);
		~C(void);
		C(const C &obj);

		C			&operator=(const C &rhs);

		void	identify(void) const;

		static Base	*build(void);
};

#endif
