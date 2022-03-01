/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:42:09 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/24 11:17:50 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

// Polymorphisme had hoc / surcharge de fonction
// Surcharge d'operateur (syntax plus cool)
// Canonique
// Notation infixe (notation fonctionelle)
// Avec un integer_coma de 8 => scale and 0000 0000.0000 0000 0000 0000 0000 0000
// Integer of 256 bits = 32 octets so the calcul is on a system of 32 bits Imac => is 2 pow of (scale 8) = 256
// Doubletofixe= (x) (x * (double)(1 << scale)) or
// Doubletofixe= (x) (x * (double)(pow(2, 8))) or
// Doubletofixe= (x) (x * (double)(256)) 
// The Radix is the position of the point on the bits
// 16 to 8 scale (radix) nee the precision on the right but open on the left 
// 0000 0000.0000 0000 0000 0000 0000 0000 is 24 radix point
//https://stackoverflow.com/questions/10067510/fixed-point-arithmetic-in-c-programming?fbclid=IwAR1cvg0ZId-HV8Efo7qshJrTfXwQIbVb8HFzDFIq4MlJjLduvg1CX8ydhUo

class Fixed{
public:
    Fixed( void );                          //Constructeur par default - Canonique                      
    ~Fixed( void );                         //Destructeur - Canonique
    Fixed(Fixed const & src );              //Constructeur par copie - Canonique      
    Fixed & operator=( Fixed const &src );  //Operateur d'assignation mise a jour instance courante - Canonique    
    int     getRawBits( void ) const;       //getteur
    void    setRawBits(int const raw);      //setteur
    
private: 
    static const int _integer_coma = 8;
    int              _integer_fixed;
};

//std::ostream &  operator<<( std::ostream & o, Fixed const & i);

#endif