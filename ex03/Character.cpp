/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:38:26 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/01 20:11:02 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character( void ) : _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( Character const & src ) : _name(src._name)
{
	for (int i = 0; i < 4; i++) {
		if (src._inventory[i] && src._inventory[i]->isEmpty() == false)
			this->_inventory[i] = src._inventory[i]->clone();
		else 
			this->_inventory[i] = NULL;
	}
}

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] && this->_inventory[i]->isEmpty() == false)
			delete this->_inventory[i];
	}
}

Character &	Character::operator=( Character const & src )
{
	if ( this != &src ) {
		this->_name = src._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] && this->_inventory[i]->isEmpty() == false)
				delete this->_inventory[i];
			if (src._inventory[i] && src._inventory[i]->isEmpty() == false)
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}

	return *this;
}

std::string const &	Character::getName( void ) const
{
	return this->_name;
}

void	Character::equip( AMateria * m )
{
	int i;
	for (i = 0; i < 4 && this->_inventory[i] && this->_inventory[i]->isEmpty() == false; i++);
	if (i < 4)
		this->_inventory[i] = m;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
		std::cout << "This slot doesn't exist" << std::endl;
	else if (this->_inventory[idx] == NULL || this->_inventory[idx]->isEmpty())
		std::cout << "This slot is empty, please fill it before unequip" << std::endl;
	else
		this->_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx > 3)
		std::cout << "This slot doesn't exist" << std::endl;
	else if (this->_inventory[idx] == NULL || this->_inventory[idx]->isEmpty())
		std::cout << "This slot is empty, please fill it before use" << std::endl;
	else
		this->_inventory[idx]->use(target);
}
