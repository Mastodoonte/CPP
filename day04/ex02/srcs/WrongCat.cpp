/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:14 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 09:46:44 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void)
{
  this->_type = "WrongCat";
  std::cout << "Default Wrongcat constructor called" << std::endl;
  return ;
}

WrongCat::~WrongCat()
{
  std::cout << "Default Wrongcat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
  std::cout << "Assignation called" << std::endl;
  this->_type = src._type;
  return (*this);
}

void    WrongCat::makeSound(void) const
{
  std::cout << "Make sound = Miaou" << std::endl;
}