/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:50:44 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 21:50:44 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	return ;
}

Brain::Brain( Brain const & src )
{
	*this = src;

	return ;
}

Brain::~Brain( void )
{
	return ;
}

Brain &	Brain::operator=( Brain const & src )
{
	if ( this != &src )
		*this = src;

	return *this;
}
