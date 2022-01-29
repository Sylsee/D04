/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:07:35 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:07:35 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	return ;
}

AMateria::AMateria( AMateria const & src )
{
	*this = src;

	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria &	AMateria::operator=( AMateria const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}
