/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:34:07 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 21:48:49 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & src );
	virtual ~WrongAnimal( void );

	WrongAnimal &	operator=( WrongAnimal const & rhs );

	std::string		getType( void ) const;

	void	makeSound( void ) const;

protected:

	std::string	_type;

};

#endif /* WRONGANIMAL_H */
