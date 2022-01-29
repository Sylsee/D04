/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:24 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 21:27:05 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog( Dog const & src )
{
	*this = src;

	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog &	Dog::operator=( Dog const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "WAF !" << std::endl;
}
