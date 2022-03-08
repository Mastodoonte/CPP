/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionS.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/08 11:39:56 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ConversionS.hpp"
#include <iostream>


ConversionS::ConversionS(const char *input) : _num(false)
{
   // std::cout << "Constructor call of ConversionS" << std::endl;
    int i = 0;
    while (input[i])
    {
        if (input[i] >= '0' && input[i] <= '9' && input[0] >= '0' && input[0] <= '9')
            this->_num = true;
        i++;    
    }
    if (this->_num == false)
        this->_value = static_cast<double>(*input);
    //Convert string to double
   // Parses str interpreting its content as a floating-point number, 
   // which is returned as a value of type double.
    else
        this->_value = std::stod(static_cast<const std::string>(input));
}

ConversionS::~ConversionS()
{
  //  std::cout << "Destructor call of ConversionS" << std::endl;
}

ConversionS::ConversionS(const ConversionS &src)
{
    this->_value = src._value;
    this->_num = src._num;
}

ConversionS &ConversionS::operator=(const ConversionS &src)
{
    this->_value = src._value;
    this->_num = src._num;
    return (*this);
}

ConversionS::operator int() const
{
	double	conv = static_cast<double>(*this);

	if (isnan(conv) || !(std::numeric_limits<int>::min() <= conv && conv <= std::numeric_limits<int>::max()))
		throw (Problem());
	return (static_cast<int>(conv));
}

ConversionS::operator char() const
{
	int	conv = static_cast<int>(*this);

	if (conv <= std::numeric_limits<char>::min() || conv >= std::numeric_limits<char>::max())
		throw (Problem());
	if (conv < 32 || conv > 126)
		throw (ProblemDisplay());
	return (static_cast<char>(conv));
}

ConversionS::operator float() const
{
	
	double	conv = static_cast<double>(*this);

	return (static_cast<float>(conv));
}

ConversionS::operator double() const
{
	if (this->_value == -1.0)
		throw (Problem());	
	return (this->_value);
}