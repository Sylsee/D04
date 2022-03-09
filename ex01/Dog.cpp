/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:24 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:11:29 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructor called" << std::endl;

	this->_brain = new Brain();
	this->_type = "Dog";

	return ;
}

Dog::Dog( Dog const & src )
{
	*this = src;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;

	delete this->_brain;
}

Dog &	Dog::operator=( Dog const & src )
{
	if ( this != &src ) {
		delete this->_brain;

		this->_brain = new Brain(*src._brain);
	}

	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "WAF !" << std::endl;
}
