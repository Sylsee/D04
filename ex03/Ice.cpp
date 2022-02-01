/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:14 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:56:12 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	return ;
}

Ice::Ice( Ice const & src ) : AMateria("ice")
{
	(void)src;
}

Ice::~Ice( void )
{
	return ;
}

Ice &	Ice::operator=( Ice const & src )
{
	if (this != &src)
		this->AMateria::operator=(src);

	return *this;
}

AMateria*	Ice::clone( void ) const
{
	return (new Ice());
}

void	Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
