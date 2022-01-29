/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:24 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 20:31:24 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	return ;
}

Dog::Dog( Dog const & src )
{
	*this = src;

	return ;
}

Dog::~Dog( void )
{
	return ;
}

Dog &	Dog::operator=( Dog const & src )
{
	if ( this != &src )
		this = src;

	return *this;
}
