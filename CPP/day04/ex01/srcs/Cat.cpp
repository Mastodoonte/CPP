/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:14 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 17:07:16 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void)
{
  this->_type = "Cat";
  this->_brain = new Brain();
  std::cout << "Default Cat constructor called with a new brain and hundred of ideas" << std::endl;
  
}

Cat::~Cat(void)
{
  std::cout << this->_type << " destruction " << std::endl ;
  delete this->_brain;
}

Cat::Cat(Cat const & src)
{
  this->_brain = NULL;
  *this = src;
  this->_type = "Deep Cat ";
  std::cout << this->getType() << "created" << std::endl;
  return ;
}


//https://www.youtube.com/watch?v=JDvFAcaaeu4 must watch to save some time 
Cat   &Cat::operator=(Cat const &src)
{
  if (this == &src)
  {
    std::cout << "Cat assignation operator for "<< this->getType() << std::endl;
    return (*this);
  }
  else
  {
    this->_type = src.getType();
    if (this->_brain)
      delete this->_brain;
    this->_brain = new Brain (*(src._brain));
    std::cout << "Cat assignation operator for "<< this->getType() << std::endl;
    return (*this);
  }
}


void    Cat::makeSound(void) const
{
  std::cout << "Make sound = Waaaf" << std::endl;
}

Brain   *Cat::get_brain( void ) const
{
  return (this->_brain);
} 