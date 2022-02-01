/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:01:42 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 20:13:15 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "fun.hpp"

int	main( void )
{
	{
		Character	deepCopy = Character("Eude");

		AMateria	*ice = new Ice();

		deepCopy.equip(ice);
		deepCopy.equip(new Cure());

		Character	deepCopy2 = deepCopy;

		deepCopy.use(0, deepCopy2);
		deepCopy2.use(0, deepCopy);

		deepCopy.unequip(0);
		deepCopy2.use(0, deepCopy);

		delete ice;
	}
	std::cout << std::endl << std::endl;
	{
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter*	me = new Character("me");

		AMateria*	tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter*	bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	return 0;
}
