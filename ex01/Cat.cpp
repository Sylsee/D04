/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 22:35:26 by spoliart         ###   ########.fr       */
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
	*this = src;

	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;

	delete this->_brain;

	return ;
}

Cat &	Cat::operator=( Cat const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

void	Cat::displayIdea( void ) const
{
	std::cout << "Cat idea: " << this->_brain->ideas[0] << std::endl;
}

void	Cat::setIdea( std::string idea )
{
	this->_brain->ideas[0] = idea;
}

void	Cat::makeSound( void ) const
{
	std::cout << "MIAOU !" << std::endl;
}
