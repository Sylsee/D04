/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 20:31:17 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	return ;
}

Cat::Cat( Cat const & src )
{
	*this = src;

	return ;
}

Cat::~Cat( void )
{
	return ;
}

Cat &	Cat::operator=( Cat const & src )
{
	if ( this != &src )
		this = src;

	return *this;
}
