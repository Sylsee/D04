/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:09:53 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructor called" << std::endl;

	this->_brain = new Brain();
	this->_type = "Cat";

	return ;
}

Cat::Cat( Cat const & src )
{
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;

	delete this->_brain;
}

Cat &	Cat::operator=( Cat const & src )
{
	if ( this != &src ) {
		delete this->_brain;

		this->_brain = new Brain(*src._brain);
	}

	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "MIAOU !" << std::endl;
}
