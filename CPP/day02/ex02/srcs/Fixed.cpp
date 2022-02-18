/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:30:47 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/18 15:11:46 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"


/*CONSTRUCTION PART*/
//----------------------------------------------------------------------
Fixed::Fixed(void)
{
  this->_fixed = 0;
 // std::cout << "Default constructor called" << std::endl;
}

// 2 ou 4 sont les octets en fontion du systeme
//puissance 8 nombre de bit de la partie fractionnaire ( decallage de 8 bits vers la gauche)
//|=> objectif obtention value fixe, on aurait pu multiplier par 256
Fixed::Fixed(const int convert_icoma)
{
 // std::cout << "Int constructor called" << std::endl;
 _fixed = convert_icoma * pow(2, _scale);
}

//transform float to integer 
//|=> objectif obtention value fixe
Fixed::Fixed(const float convert_fcoma)
{
//  std::cout << "Float constructor called" << std::endl;
 this->_fixed = roundf(convert_fcoma * pow(2, _scale));
}

/* Fixed to float with casting */
/*x = floating_input * 2^(fractional_bits)*/
float Fixed::toFloat( void ) const
{
 return(_fixed / pow(2, _scale));
}

//from fixed point to int
int Fixed::toInt( void ) const
{
  return((int) (_fixed / pow(2, _scale)));
}

Fixed::Fixed(const Fixed &src )
{
   //std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed::~Fixed(void)
{
  // std::cout << "Destructor called" << std::endl;
}

////Operateur d'assignation 
Fixed &Fixed::operator=( Fixed const &src )
{
 // std::cout << "Copy assignment called" << std::endl;
  this->_fixed = src.getRawBits();
  return (*this);
}

int    Fixed::getRawBits( void ) const
{
  return (this->_fixed);
}

void  Fixed::setRawBits(int const raw)
{
  this->_fixed = raw;
}

std::ostream &  operator<<( std::ostream & o, Fixed const & i)
{
  o << i.toFloat();
  return (o);
}

//Operateur arithmetique +
Fixed Fixed::operator+(Fixed const &rhs) const
{
 Fixed res = this->toFloat() + rhs.toFloat();
  return (res);
  
}

//Operateur arithmetique -
Fixed Fixed::operator-(Fixed const &rhs) const
{
  Fixed res = this->toFloat() - rhs.toFloat();
  return (res);
}

//Operateur aritmetique *
Fixed Fixed::operator*(Fixed const &rhs) const
{
  Fixed res = this->toFloat() * rhs.toFloat();
  return (res);
}

//Operateur aritmetique /
Fixed Fixed::operator/(Fixed const &rhs) const
{
  Fixed res = this->toFloat() / rhs.toFloat();
  return (res);
}

/*Les 6 opérateur de comparaison : >, <, >=, <=, == et !=.*/

//Operator comparaison >
bool Fixed::operator>(Fixed const &rhs) const
{
  return (this->getRawBits() > rhs.getRawBits());
}

//Operator comparaison <
bool Fixed::operator<(Fixed const &rhs) const
{
  return (this->getRawBits() < rhs.getRawBits());
}

//Operator comparaison >=
bool Fixed::operator>=(Fixed const &rhs) const
{
  return (this->getRawBits() >= rhs.getRawBits());
}

//Operator comparaison <=
bool Fixed::operator<=(Fixed const &rhs) const
{
  return (this->getRawBits() <= rhs.getRawBits());
}

//Operator comparaison ==
bool Fixed::operator==(Fixed const &rhs) const
{
  return (this->getRawBits() == rhs.getRawBits());
}

//Operator comparaison !=
bool Fixed::operator!=(Fixed const &rhs) const
{
  return (this->getRawBits() == rhs.getRawBits());
}

/*
• Les 4 opérateurs d’incrémentation et de décrémentation (pré-incrémentation et
post-incrémentation, pré-décrémentation et post-décrémentation) qui diminueront
la valeur du nombre à virgule fixe d’unité  tel que 1 +  > 1. */
//https://www.calmip.univ-toulouse.fr/c++/surch.html

//Prefix incrementation
//return the real class because the result is immediate, 
Fixed & Fixed::operator++(void)
{
 // this->_fixed = ((this->_fixed * pow(2, _scale)) + 1);
  (this->_fixed)++;
 return (*this);
}

//Postfix incrementation
//Here we are instanciate a temporary class for return a value non incremented but we do incrementate the real class
Fixed  Fixed::operator++(int)
{
  Fixed tmp = *this;
  this->_fixed++;
  return (tmp);
}

//Prefix decrementation
//return the real class because the result is immediate, 
Fixed & Fixed::operator--(void)
{
  (this->_fixed)--;
  return (*this);
}

//Postfix decrementation
//Here we are instanciate a temporary class for return a value non decremented but we do decremente the real class
Fixed  Fixed::operator--(int)
{
  Fixed tmp = *this;
  (this->_fixed)--;
  return (tmp);
}

//Function overloaded

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
  if(lhs > rhs)
    return (lhs);
  else
    return (rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
  if(lhs > rhs)
    return (lhs);
  else
    return (rhs);
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
  if(lhs < rhs)
    return (lhs);
  else
    return (rhs);
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
  if(lhs < rhs)
    return (lhs);
  else
    return (rhs);
}

