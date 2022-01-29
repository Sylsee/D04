/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:34:07 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 21:45:59 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	*this = src;

	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->_type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "MEUUUUUH !" << std::endl;

	return ;
}
