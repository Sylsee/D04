/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:31:17 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 21:58:50 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:

	Cat( void );
	Cat( Cat const & src );
	virtual ~Cat( void );

	Cat &	operator=( Cat const & rhs );

	virtual void	makeSound( void ) const;

};

#endif /* CAT_H */
