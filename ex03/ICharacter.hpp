/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:32:21 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 17:23:14 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter
{

public:

	virtual ~ICharacter( void ) {}

	virtual std::string const &	getName( void ) const = 0;
	virtual void				equip( AMateria * m ) = 0;
	virtual void				unequip( int idx ) = 0;
	virtual void				use( int idx, ICharacter & target ) = 0;

};

#endif /* ICHARACTER_HPP */
