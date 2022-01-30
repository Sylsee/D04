/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:07:35 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:31:00 by spoliart         ###   ########.fr       */
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

void	use( ICharacter & target )
{
	(void)target;
}

std::string const &	getType( void ) const
{
	return this->_type;
}

bool	isEmpty( void ) const
{
	return this->_type.empty();
}
