/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:30:47 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/17 14:57:25 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"


/*CONSTRUCTION PART*/
//----------------------------------------------------------------------
Fixed::Fixed(void)
{
  this->_integer_fixed = 0;
  std::cout << "Default constructor called" << std::endl;
}

// 2 ou 4 sont les octets en fontion du systeme
//puissance 8 nombre de bit de la partie fractionnaire ( decallage de 8 bits vers la gauche)
//|=> objectif obtention value fixe, on aurait pu multiplier par 256
Fixed::Fixed(const int convert_icoma)
{
  std::cout << "Int constructor called" << std::endl;
 _integer_fixed = convert_icoma * pow(2, _integer_coma);
}

//transform float to integer 
//|=> objectif obtention value fixe
Fixed::Fixed(const float convert_fcoma)
{
  std::cout << "Float constructor called" << std::endl;
 this->_integer_fixed = roundf(convert_fcoma * pow(2, _integer_coma));
}

/* Fixed to float with casting */
/*x = floating_input * 2^(fractional_bits)*/
float Fixed::toFloat( void ) const
{
 return(_integer_fixed / pow(2, _integer_coma));
}

//from fixed point to int
int Fixed::toInt( void ) const
{
  return((int) (_integer_fixed / pow(2, _integer_coma)));
}

Fixed::Fixed(const Fixed &src )
{
   std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed::~Fixed(void)
{
   std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( Fixed const &src ) //assignation 
{
  std::cout << "Copy assignment called" << std::endl;
  this->_integer_fixed = src.getRawBits();
  return (*this);
}

int    Fixed::getRawBits( void ) const
{
  return (this->_integer_fixed);
}

void  Fixed::setRawBits(int const raw)
{
  this->_integer_fixed = raw;
}

std::ostream &  operator<<( std::ostream & o, Fixed const & i)
{
  o << i.toFloat();
  return (o);
}

/*Les 6 opérateur de comparaison : >, <, >=, <=, == et !=.
• Les 4 opérateurs d’incrémentation et de décrémentation (pré-incrémentation et
post-incrémentation, pré-décrémentation et post-décrémentation) qui diminueront
la valeur du nombre à virgule fixe d’unité  tel que 1 +  > 1. */

//Operateur arithmetique +
Fixed Fixed::operator+(Fixed const &rhs) const
{
  Fixed res = this->toInt() + rhs.toInt();
  return (res);
}

//Operateur arithmetique -
Fixed Fixed::operator-(Fixed const &rhs) const
{
  Fixed res = this->toInt() - rhs.toInt();
  return (res);
}

//Operateur aritmetique *
Fixed Fixed::operator*(Fixed const &rhs) const
{
  Fixed res = this->toInt() * rhs.toInt();
  return (res);
}

//Operateur aritmetique /
Fixed Fixed::operator/(Fixed const &rhs) const
{
  Fixed res = this->toInt() * rhs.toInt();
  return (res);
}