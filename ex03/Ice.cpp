/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:14 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:36:08 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	return ;
}

Ice::Ice( Ice const & src ) : AMateria("ice")
{
	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice &	Ice::operator=( Ice const & src )
{
	if (src != &src)
		this->AMateria::operator=(src);

	return *this;
}

AMateria*	clone( void ) const
{
	return (new Ice(*this));
}

void	Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
