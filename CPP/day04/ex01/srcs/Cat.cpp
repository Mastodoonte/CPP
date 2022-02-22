/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:14 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 11:38:19 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void)
{
  this->_type = "Cat";
  std::cout << "Default cat constructor called" << std::endl;
  return ;
}

Cat::~Cat()
{
  std::cout << "Default cat destructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Cat & Cat::operator=(Cat const & src)
{
  std::cout << "Assignation called" << std::endl;
  this->_type = src._type;
  return (*this);
}

void    Cat::makeSound(void) const
{
  std::cout << "Make sound = Miaou" << std::endl;
}

Brain   *Cat::get_brain( void ) const
{
  return (this->_brain);
} 