/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:38:26 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:08:34 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

public:

	Character( void );
	Character( Character const & src );
	Character( std::string const & name );
	virtual ~Character( void );

	Character &	operator=( Character const & src );

	virtual std::string const &	getName( void ) const;
	virtual void				equip( AMateria * m );
	virtual void				unequip( int idx );
	virtual void				use( int idx, ICharacter & target );

private:

	std::string	_name;
	AMateria	*_inventory[4];

};

#endif /* CHARACTER_H */
