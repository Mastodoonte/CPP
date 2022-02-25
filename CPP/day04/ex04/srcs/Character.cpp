/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:48:52 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/25 18:28:20 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : _name(""), _nbItem(0) 
{
  std::cout << "Default Constructor of Character called without name" << std::endl;
}

/* À la construction, l’inventaire est vide*/
Character::Character(const std::string &name) : _name(name), _nbItem(0) 
{
  int i = 0;
  while (i < 4)
  {
    this->_itemsTab[i] = NULL;
    i++;
  }
  std::cout << "Default Constructor of Character called" << std::endl;
  
}

Character::~Character()
{
  std::cout << "Default Constructor of Character called" << std::endl;
}

Character::Character(const Character &src)
{
  *this = src;
  std::cout << "Copy constructor called" << std::endl;
}

Character & Character::operator=(Character const & src)
{
  int i = 0;
  //this->_nbItem = 0;
  while (i < 4)
  {
    if (this->_itemsTab[i])
    {
      delete _itemsTab[i];
    }
    this->_itemsTab[i] = src._itemsTab[i];
    if (src._itemsTab[i] != NULL)
      this->_nbItem++;
  }
  this->_name = src._name;
  std::cout << "Assignation constructor of Character called" << std::endl;
}

std::string const   &Character::getName() const
{
  return (this->_name);
}

/*Les Materias sont équipées au premier emplacement 
vide trouvé, soit dans l’ordre suivant : de l’emplacement 0 au 3.
Dans le cas où on essaie d’ajouter une Materia à un inventaire plein, 
ou d’utiliser/retirerune Materia qui n’existe pas, ne faites rien
(cela n’autorise pas les bugs pour autant*/
void  Character::equip(AMateria* m)
{
  if (this->_nbItem < 4)
  {
    this->_itemsTab[this->_nbItem] = m;
    std::cout << "The item => " << this->_itemsTab[this->_nbItem] << std::endl;
    this->_nbItem++;
  }
  else
  {
    std::cout << "The item => " << m->getType() << " is impossible to be carried because not enough room" << std::endl;
  }
}

/*La fonction membre The unequip() ne doit PAS delete la Materia */
void  Character::unequip(int idx)
{
  if (idx < 0 && idx > 4 || this->_itemsTab[idx] == NULL)
  {
    std::cout << "wrong index" << std::endl;
    return;
  }
  int i = idx ; // In case of 0
  delete this->_itemsTab[idx];
  this->_itemsTab[idx] = NULL;
  while (i < 3)
  {
    this->_itemsTab[i] = this->_itemsTab[i + 1];
    i++;
  }
}

/* La fonction membre use(int, ICharacter&)utilisera la Materia de l’emplacement[idx], 
et passera la cible en paramètre à la fonction AMateria::use.
On chaine l'action et on passe la cible en paractere a AMateria::use */
void  Character::use(int idx, ICharacter &target)
{
  if (idx < 0 && idx > 4)
  {
    std::cout << "wrong index" << std::endl;
    return;
  }
  this->_itemsTab[idx]->use(target);
  this->unequip(idx);
}

void                Character::display_inventory() const
{
  int i = 0;
  while (i < 4)
  {
    std::cout << "Place of the inventory[" << i << "] => " << std::endl;
    if (this->_itemsTab[i] == NULL)
    {
      std::cout << "Nothing at this place into inventory" << std::endl;
    }
    else
    {
      std::cout << this->_itemsTab[i] << std::endl;
    }
  }
}