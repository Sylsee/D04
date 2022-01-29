/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:31:50 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : _type("cure")
{
	return ;
}

Cure::Cure( Cure const & src )
{
	*this = src;

	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure &	Cure::operator=( Cure const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}

AMateria*	clone( void ) const
{
	Cure*	clone = new Cure();

	return clone;
}
