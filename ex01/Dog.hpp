/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:24 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 22:23:39 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:

	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );

	Dog &	operator=( Dog const & rhs );

	virtual void	makeSound( void ) const;

	virtual void	displayIdea( void ) const;
	virtual void	setIdea( std::string idea );

private:

	Brain	*_brain;

};

#endif /* DOG_H */
