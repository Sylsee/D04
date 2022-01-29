/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:30:27 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:00:14 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

int	main( void )
{
//	AAnimal	animal; // Uncomment this line will produce an error
	Cat	cat;
	Dog	dog;

	std::cout << "cat type: " << cat.getType() << std::endl;
	std::cout << "dog type: " << dog.getType() << std::endl;

	cat.makeSound();
	dog.makeSound();

	cat.setIdea("I love balls of wool");
	cat.displayIdea();
	dog.setIdea("WAF WAF WAF");
	dog.displayIdea();

	return 0;
}
