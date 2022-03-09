/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 09:50:50 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
  this->_type = "Dog";
  std::cout << "Default dog constructor called" << std::endl;
}

Dog::~Dog()
{
  std::cout << "Default dog destructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
  *this = src;
}

Dog & Dog::operator=(Dog const & src)
{
  std::cout << "Assignation dog called " << std::endl;
  if (this == &src)
      return (*this);
  *this = src;
  return (*this);
}

void    Dog::makeSound(void) const
{
  std::cout << "Make sound = Waaaf" << std::endl;
}