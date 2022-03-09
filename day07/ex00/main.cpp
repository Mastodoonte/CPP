/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:09:30 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/09 13:34:01 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

class Awesome
{
public:
    Awesome(int n) : _n(n){};
    bool operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
    bool operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
    bool operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
    bool operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
    bool operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
    bool operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}
    int  getN(void) {return (this->_n);}

private:
    int _n;
};
    
int main(void)
{
    int a = 2;
    int b = 3;
    float aa = 1.45;
    float bb = 2.25332;

    std::cout << "MANDATORY TEST" << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    Awesome test1(10);
    Awesome test2(15);

    std::cout << "\nDEEPER TEST" << std::endl;
    std::cout << "Value de test1 = "<<  test1.getN() << " Value de bb float = " << test2.getN() << std::endl;
    ::swap(test1, test2);
    std::cout << "Value de test1 = "<<  test1.getN() << " Value de bb float = " << test2.getN() << std::endl;
    
    
}