/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:30:27 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/05 18:37:16 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	{
		const Animal *meta = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		std::cout << "Dog type: " << dog->getType() << std::endl;
		std::cout << "Cat type: " << cat->getType() << std::endl;

		dog->makeSound();
		cat->makeSound();
		meta->makeSound();

		delete cat;
		delete dog;
		delete meta;
	}
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *wrongCat = new WrongCat();

		std::cout << "Wrong cat type: " << wrongCat->getType() << std::endl;

		wrongCat->makeSound();
		meta->makeSound();

		delete wrongCat;
		delete meta;
	}

	return 0;
}
