/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:01:50 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 18:49:28 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	for (int i = 0; i < 4; i++) {
		if (src._materia[i]->isEmpty() == false)
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] && this->_materia[i]->isEmpty() == false)
			delete this->_materia[i];
	}
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & src )
{
	if ( this != &src ) {
		for (int i = 0; i < 4; i++) {
			if (this->_materia[i]->isEmpty() == false)
				delete this->_materia[i];
			if (src._materia[i]->isEmpty() == false)
				this->_materia[i] = src._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}

	return *this;
}

void	MateriaSource::learnMateria( AMateria * m )
{
	int	i;

	for (i = 0; i < 4 && this->_materia[i] && this->_materia[i]->isEmpty() == false; i++) ;
	if (i < 4)
		this->_materia[i] = m;
}

AMateria *	MateriaSource::createMateria( std::string const & type )
{
	int	i;
	for (i = 0; i < 4 && this->_materia[i] && this->_materia[i]->getType().compare(type); i++) ;
	if (i < 4)
		return this->_materia[i]->clone();
	return NULL;
}
