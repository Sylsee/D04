/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:13:04 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 22:56:44 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class AAnimal
{
public:

	std::string		getType( void ) const;

	virtual void	makeSound( void ) const = 0;

protected:

	std::string	_type;

};

#endif /* ANIMAL_H */
