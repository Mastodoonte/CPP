/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:42:09 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/17 14:58:12 by flmastor         ###   ########.fr       */
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
    
private: 
    static const int _integer_coma = 8;
    int              _integer_fixed;    // Raw bits
};

//Attention puisque diminution de la valeur d'encapsulation 
// revient à std::ostream & o << Fixed const & i
//Methode d'affichage d'une valeur sur notre classe 
std::ostream &  operator<<( std::ostream & o, Fixed const & i); // 

#endif