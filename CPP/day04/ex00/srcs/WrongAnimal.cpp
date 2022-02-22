/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:35 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/21 16:33:58 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
  std::cout << "Default constructor WrongAnimal called" << std::endl;
  return;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default destructor WrongAnimal called" << std::endl;
    return ;
}

const std::string &WrongAnimal::getType(void) const
{
  return (this->_type);
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
  *this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
  return (*this);
}

void    WrongAnimal::makeSound(void) const
{
  std::cout << "Unknown sounds from an unknown animal" << std::endl;
}

//WrongAnimal::WrongAnimal(std::string name) : _type(name)
//{
  //_type = name;
//  std::cout << "Constructor called for Dog and type " << name << std::endl;
//}
