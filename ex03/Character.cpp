/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:38:26 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/31 00:38:48 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("default")
{
	return ;
}

Character::Character( Character const & src ) : _name(src._name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = src._materia[i];
}

Character::Character( std::string const & name ) : _name(name)
{
	return ;
}

Character::~Character( void )
{
	return ;
}

Character &	Character::operator=( Character const & src )
{
	if ( this != &src )
		this->_name = src._name;

	return *this;
}

std::string const &	Character::getName( void ) const
{
	return this->_name;
}

void	Character::equip( AMateria * m )
{
	for (int i = 0; this->_materia[i].isEmpty() && i < 4; i++);
	if (i < 4) {
		this->_materia[i] = m;
		std::cout << "Materia successfully added to " << this->_name
			<< " inventory!" << std::endl;
	}
	else
		std::cout << this->_name << " inventory is full" << std::endl;
}

void	Character::unequip( int idx )
{
	if (idx < 1 || idx > 4)
		std::cout << "This slot doesn't exist" << std::endl;
	else if (this->_materia[idx - 1].isEmpty())
		std::cout << "This slot is empty, please fill it before unequip" << std::endl;
	else
		this->_materia[idx - 1] = NULL;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 1 || idx > 4)
		std::cout << "This slot doesn't exist" << std::endl;
	else if (this->_materia[idx - 1].isEmpty())
		std::cout << "This slot is empty, please fill it before use" << std::endl;
	else
		this->_materia[idx - 1].AMateria::use(target);
}
