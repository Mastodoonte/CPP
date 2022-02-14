/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:30:47 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/14 14:40:31 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

//const int Fixed::_integer_coma = 8; 

Fixed::Fixed(void)
{
  this->_integer_fixed = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
   std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src )
{
   std::cout << "=>>>>>Copy constructor called" << std::endl;
  *this = src;
}

//l'initialisation se trouve dans la declaration pour une copy construction
Fixed &Fixed::operator=( Fixed const &src ) //assignation 
{
  std::cout << "=>> assignationCopy assignment called" << std::endl;
  this->_integer_fixed = src.getRawBits();
  return (*this);
}

int    Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_integer_fixed);
}

void  Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits member function called" << std::endl;
  this->_integer_fixed = raw;
}