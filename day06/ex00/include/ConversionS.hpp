/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionS.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:53:09 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/15 14:01:27 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
#define CONVERSIONS_H
#include <exception>
#include <limits>
#include <iostream>
#include <stdlib.h>     /* atof */
#include <math.h>
# include <limits>
# include <cmath>
#include <iomanip>
#include <string> 


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
    void    check(const char *input, std::string str);
    operator int() const;
    operator char() const;
    float toFloat(void);
    double toDouble(void);

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