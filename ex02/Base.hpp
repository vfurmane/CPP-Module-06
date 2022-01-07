/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:24:42 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/07 10:44:48 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# define NUMBER_OF_BUILDER_FUNCTIONS 3

# include <stdlib.h>
# include <time.h>

class Base
{
	public:
		virtual ~Base(void);

		Base	*generate(void);
};

#endif
