/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 21:27:38 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";

	return ;
}

Cat::Cat( Cat const & src )
{
	*this = src;

	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat &	Cat::operator=( Cat const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "MIAOU !" << std::endl;
}
