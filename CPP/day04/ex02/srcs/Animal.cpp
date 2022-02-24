/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:35 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/24 10:04:01 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
  std::cout << "Animal/Mother class construction " << std::endl ; 
  return;
}

Animal::~Animal()
{
  std::cout << "Animal/Mother class destruction " << std::endl ; 
    return ;
}

const std::string &Animal::getType(void) const
{
  return (this->_type);
}

Animal::Animal(Animal const & src)
{
  *this = src;
}

Animal & Animal::operator=(Animal const & src)
{
  this->_type = src.getType();
  return (*this);
}

void    Animal::makeSound(void) const
{
  std::cout << "Unknown sounds from an unknown animal" << std::endl;
}