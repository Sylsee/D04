/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:35:31 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	return ;
}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure &	Cure::operator=( Cure const & src )
{
	if (this != &src)
		this->AMateria::operator=(src);

	return *this;
}

AMateria*	clone( void ) const
{
	return (new Cure(*this));
}

void	Cure::use( ICharacter & target )
{
	std::cout << "* heal's " << target.getName() << "'s wounds *" << std::endl;
}
