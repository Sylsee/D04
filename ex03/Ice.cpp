/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:14 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:31:35 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : _type("ice")
{
	return ;
}

Ice::Ice( Ice const & src )
{
	*this = src;

	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice &	Ice::operator=( Ice const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

AMateria*	clone( void ) const
{
	Ice*	clone = new Fire();

	return clone;
}
