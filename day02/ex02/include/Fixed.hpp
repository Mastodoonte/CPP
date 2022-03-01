/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:42:09 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/18 14:49:17 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
public:
    Fixed( void );
    ~Fixed( void );
    Fixed(const int convert_icoma);
    Fixed(const float convert_fcoma);
    Fixed(Fixed const & src );     
    Fixed & operator=( Fixed const &src );     //Surchage d'operateur d'affectation    
    int     getRawBits( void ) const;       //getteur
    void    setRawBits(int const raw);      //setteur
    float toFloat( void ) const;
    int toInt( void ) const;
    //Arithmetic operator
    Fixed operator+(Fixed const &rhs) const;
    Fixed operator-(Fixed const &rhs) const;
    Fixed operator*(Fixed const &rhs) const;
    Fixed operator/(Fixed const &rhs) const;
    //Comparaison operation
    bool operator>(Fixed const &rhs) const;
    bool operator<(Fixed const &rhs) const;
    bool operator>=(Fixed const &rhs) const;
    bool operator<=(Fixed const &rhs) const;
    bool operator==(Fixed const &rhs) const;
    bool operator!=(Fixed const &rhs) const;
    //Incrementation
   Fixed & operator++(void);
   Fixed   operator++(int);
   Fixed & operator--(void);
   Fixed  operator--(int);
   //Fonction class, the declaration is static to make them have the opportunity to be called without the declaration of class and out of instanciation
   static const Fixed & max(const Fixed &lhs, const Fixed &rhs);
   static       Fixed & max( Fixed &lhs, Fixed &rhs );
   static const Fixed & min(const Fixed &lhs, const Fixed &rhs);
   static       Fixed & min( Fixed &lhs, Fixed &rhs );

    
private: 
    static const int _scale = 8;
    int              _fixed;    // Raw bits
};

//Attention puisque diminution de la valeur d'encapsulation 
// revient à std::ostream & o << Fixed const & i
//Methode d'affichage d'une valeur sur notre classe 
std::ostream &  operator<<( std::ostream & o, Fixed const & i); // 

#endif