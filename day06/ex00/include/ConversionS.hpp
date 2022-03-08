/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionS.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:53:09 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/08 11:35:14 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
#define CONVERSIONS_H
#include <exception>
#include <limits>
//#include <cmath>
//#include <cctype>



class ConversionS
{
private:
    bool    _num;
    double  _value;
    ConversionS(){};
public:
    ConversionS(const char *input);
    ~ConversionS();
    ConversionS(const ConversionS &src);
    ConversionS &operator=(const ConversionS &src);

    //Cast operator qui permettent une conversion, 
    //le compilateur verifie dans la classe si il y a un equivalent, cela peut se faire pour des casts implicit
    operator int() const;
    operator char() const;
    operator float() const;
    operator double() const;

    //---------------------------------------------------------------------------------------------//
    struct Problem : public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("impossible");
        }  
    };
    struct ProblemDisplay : public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("Non displayable");
        }  
    };
    struct ProblemInput : public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("Invalid argument");
        }  
    };

    

};

#endif