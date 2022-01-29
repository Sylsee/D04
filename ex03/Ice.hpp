/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:18:14 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:29:07 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>

class Ice
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
