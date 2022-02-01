/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:14 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:10:42 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{

public:

	Ice( void );
	Ice( Ice const & src );
	virtual ~Ice( void );

	Ice &	operator=( Ice const & src );

	virtual AMateria*	clone( void ) const;
	virtual void		use( ICharacter& target );

private:


};

#endif /* ICE_H */
