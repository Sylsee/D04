/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:38:09 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 21:46:24 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "Wrong Cat";
	return ;
}

WrongCat::WrongCat( WrongCat const & src )
{
	*this = src;

	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=( WrongCat const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "MIAOUU !" << std::endl;
}
