/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 10:24:14 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/07 11:47:11 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	Base	*(*builders[NUMBER_OF_BUILDER_FUNCTIONS])(void);

	srand(time(NULL));
	builders[0] = A::build;
	builders[1] = B::build;
	builders[2] = C::build;
	return (builders[rand() % 3])();
}

void	identify(Base *p)
{
	p->identify();
}

void	identify(Base &p)
{
	p.identify();
}

int	main(void)
{
	Base	*base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}
