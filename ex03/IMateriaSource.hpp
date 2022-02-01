/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:59:14 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 17:00:33 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource
{

public:

	virtual ~IMateriaSource( void ) {}
	virtual void		learnMateria( AMateria* ) = 0;
	virtual AMateria*	createMateria( std::string const & type ) = 0;

};

#endif
