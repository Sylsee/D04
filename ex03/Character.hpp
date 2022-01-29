/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:38:26 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 23:42:54 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{

public:

	Character( void );
	Character( Character const & src );
	virtual ~Character( void );

	Character &	operator=( Character const & src );

protected:


private:


};

#endif /* CHARACTER_H */
