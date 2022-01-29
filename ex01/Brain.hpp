/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:50:44 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 22:27:08 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
public:

	std::string	ideas[100];

	Brain( void );
	Brain( Brain const & src );
	~Brain( void );

	Brain &	operator=( Brain const & rhs );

};

#endif /* BRAIN_H */
