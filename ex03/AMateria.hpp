/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:07:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:54:26 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

public:

	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );

	AMateria &	operator=( AMateria const & src );

	std::string const &	getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use( ICharacter & target );

	bool				isEmpty( void ) const;

protected:

	std::string	_type;

};

#endif /* AMATERIA_H */
