/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:24 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 22:57:04 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
public:

	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );

	Dog &	operator=( Dog const & rhs );

	virtual void	makeSound( void ) const;

	void	displayIdea( void ) const;
	void	setIdea( std::string idea );

private:

	Brain	*_brain;

};

#endif /* DOG_H */
