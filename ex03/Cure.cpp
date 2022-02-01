/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:11:34 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	return ;
}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
	(void)src;
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

AMateria*	Cure::clone( void ) const
{
	return (new Cure());
}

void	Cure::use( ICharacter & target )
{
	std::cout << "* heal's " << target.getName() << "'s wounds *" << std::endl;
}
