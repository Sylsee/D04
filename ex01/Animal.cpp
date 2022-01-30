/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:13:04 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:15:41 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal( Animal const & src )
{
	*this = src;

	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal &	Animal::operator=( Animal const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

std::string	Animal::getType( void ) const
{
	return this->_type;
}

void	Animal::makeSound( void ) const
{
	return ;
}
