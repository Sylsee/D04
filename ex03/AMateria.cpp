/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:07:35 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:09:43 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	return ;
}

AMateria::AMateria( AMateria const & src )
{
	this->_type = src._type;
}

AMateria::AMateria( std::string const & type )
{
	this->_type = type;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria &	AMateria::operator=( AMateria const & src )
{
	if ( this != &src )
		this->_type = src._type;

	return *this;
}

void	AMateria::use( ICharacter & target )
{
	(void)target;
}

std::string const &	AMateria::getType( void ) const
{
	return this->_type;
}

bool	AMateria::isEmpty( void ) const
{
	return this->_type.empty();
}
