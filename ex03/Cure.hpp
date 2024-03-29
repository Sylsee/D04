/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:10:27 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{

public:

	Cure( void );
	Cure( Cure const & src );
	virtual ~Cure( void );

	Cure &	operator=( Cure const & src );

	virtual AMateria*	clone( void ) const;
	virtual void		use( ICharacter& target );

};

#endif /* CURE_H */
