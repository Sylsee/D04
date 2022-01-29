/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 22:35:38 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:

	Cat( void );
	Cat( Cat const & src );
	virtual ~Cat( void );

	Cat &	operator=( Cat const & rhs );

	virtual void	makeSound( void ) const;

	virtual void	displayIdea( void ) const;
	virtual void	setIdea( std::string idea );

private:

	Brain	*_brain;

};

#endif /* CAT_H */
