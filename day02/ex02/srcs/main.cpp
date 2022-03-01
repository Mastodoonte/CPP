/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:36:23 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/18 15:14:12 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) 
{
    Fixed a;
   Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << "         ======================" << std::endl;
    std::cout << "                 My test" << std::endl;
    std::cout << "         ======================" << std::endl;
    std::cout << "Declaration of class a = 5 and test = 4\n" << std::endl;
    a = 5;
    Fixed test = 4;
    Fixed res;
    
    std::cout << "[ Operator addition => a + test]" << std::endl;
    res = a + test;
    std::cout << res << std::endl;
    
    std::cout << std::endl << "[ Operator minus => a - b ]" << std::endl;
    res = a - test;
    std::cout << res << std::endl;

    std::cout << std::endl << "[ Operator time => * ]" << std::endl;
    res = a * test;
    std::cout << res << std::endl;
    
   std::cout << std::endl <<"[ Operator division => / ]" << std::endl;
   res = a / test;
   std::cout << res << std::endl;
    
    std::cout << std::endl <<"[ Operator superior => > ]" << std::endl;
    res = a > test;
    std::cout << res << std::endl;
    
    std::cout << std::endl <<"[ Operator inferior => < ]" << std::endl;
    res = a < test;
    std::cout << res << std::endl;
    
    std::cout << std::endl <<"[ Operator superior equal => >= ]" << std::endl;
    res = a >= test;
    std::cout << res << std::endl;
    
    std::cout << std::endl << "[ Operator inferior equal =>  <= ]" << std::endl;
    res = a <= test;
    std::cout << res << std::endl;
    
   std::cout << std::endl <<"[ Operator equal => == ]" << std::endl;
   res = a == test;
   std::cout << res << std::endl;
   
   std::cout << std::endl <<"[ Operator different => != ]" << std::endl;
   res = a != test;
   std::cout << res << std::endl;
   
   std::cout << std::endl <<"[ Operator pre incrementation => ++a (a = 5) || 1 + ε > 1 epsilon = quantite derisoire ]" << std::endl;
   a = 5;
   std::cout << "Value initial of a = " << a.toFloat() << std::endl << std::endl;
   ++a;
   std::cout << a << std::endl;
   
   std::cout << std::endl <<"[ Operator post incrementation => value++ ]" << std::endl;
   a++;
   std::cout << a << std::endl;
   
   std::cout << std::endl <<"[ Operator pre decrementation => --value ]" << std::endl;
   --a;
   std::cout << a << std::endl;
   
  std::cout << std::endl << "[ Operator post decrementation => value-- ]" << std::endl;
   a--;
   std::cout << a << std::endl;
   
  std::cout << std::endl <<"[ Operator function overloaded max const]" << std::endl;
  const Fixed aa = 5;
  const Fixed testt = 4;
  std::cout << Fixed::max(aa, testt) << std::endl;
   
  std::cout << std::endl <<"[ Operator function overloaded min const ]" << std::endl;
   std::cout << Fixed::min(aa, testt) << std::endl;
  
  std::cout << std::endl <<"[ Operator function overloaded max ]" << std::endl;
  std::cout << Fixed::max(a, test) << std::endl;
  
  std::cout << std::endl << "[ Operator function overloaded min ]" << std::endl;
  std::cout << Fixed::min(a, test) << std::endl;
  
  return 0;
}