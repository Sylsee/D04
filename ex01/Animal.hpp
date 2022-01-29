/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:13:04 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 22:24:15 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
public:

	Animal( void );
	Animal( Animal const & src );
	virtual ~Animal( void );

	Animal &	operator=( Animal const & rhs );

	std::string		getType( void ) const;

	virtual void	makeSound( void ) const;

	virtual void	setIdea( std::string idea );
	virtual void	displayIdea( void ) const;

protected:

	std::string	_type;

};

#endif /* ANIMAL_H */
