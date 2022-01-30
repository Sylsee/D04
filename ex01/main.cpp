/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:30:27 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:15:09 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int	main( void )
{
	Animal	*animal[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		animal[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete animal[i];

	return 0;
}
