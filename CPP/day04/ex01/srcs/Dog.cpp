/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 17:11:32 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void)
{
  this->_type = "Dog";
  this->_brain = new Brain();
  std::cout << "Default dog constructor called with a new brain and hundred of ideas" << std::endl;
  
}

Dog::~Dog(void)
{
  std::cout << this->_type << " destruction " << std::endl ;
  delete this->_brain;
}

Dog::Dog(Dog const & src)
{
  this->_brain = NULL;
  *this = src;
  this->_type = "Deep dog ";
  std::cout << this->getType() << "created" << std::endl;
  return ;
}


//https://www.youtube.com/watch?v=JDvFAcaaeu4 must watch to save some time 
Dog   &Dog::operator=(Dog const &src)
{
  if (this == &src)
  {
    std::cout << "Dog assignation operator for "<< this->getType() << std::endl;
    return (*this);
  }
  else
  {
    this->_type = src.getType();
    if (this->_brain)
      delete this->_brain;
    this->_brain = new Brain (*(src._brain)); //Ici creation en dupliquant pour ne pas pointer vers la mauvaise zone memoire
    std::cout << "Dog assignation operator for "<< this->getType() << std::endl;
    return (*this);
  }
}


void    Dog::makeSound(void) const
{
  std::cout << "Make sound = Waaaf" << std::endl;
}

Brain   *Dog::get_brain( void ) const
{
  return (this->_brain);
} 