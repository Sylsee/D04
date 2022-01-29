/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:07:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:12:27 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>

class AMateria
{

public:

	std::string const &	getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use( ICharacter& target );

protected:

	std::string	_type;

};

#endif /* AMATERIA_H */
