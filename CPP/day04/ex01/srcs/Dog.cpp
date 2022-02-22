/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 11:39:02 by florianmast      ###   ########.fr       */
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
  delete this->_brain;
  std::cout << "Default dog destructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
  *this = src;
}

//https://www.youtube.com/watch?v=JDvFAcaaeu4 must watch to save some time 
Dog   &Dog::operator=(Dog const &src)
{
  std::cout << "Dog assignation operator with dog call" << std::endl;
  this->_type = src.getType();
  new Brain (*(src._brain));
  return (*this);
}

Animal &Dog::operator=(const Animal & src) 
{
  std::cout << "Animal assignation operator with dog call" << std::endl;
  this->_type = src.getType();
  new Brain (*(src.get_brain()));
  return (*this);
}

void    Dog::makeSound(void) const
{
  std::cout << "Make sound = Waaaf" << std::endl;
}

Brain   *Dog::get_brain( void ) const
{
  return (this->_brain);
} 