/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:38:26 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:42:54 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	return ;
}

Character::Character( Character const & src )
{
	*this = src;

	return ;
}

Character::~Character( void )
{
	return ;
}

Character &	Character::operator=( Character const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}
