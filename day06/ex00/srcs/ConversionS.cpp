/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionS.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/15 14:02:38 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ConversionS.hpp"

ConversionS::ConversionS(const char *input) : _num(false)
{
    (void)input; 
}

void    ConversionS::check(const char *input, std::string str)
{
    (void)str;
    int i = 0;
    while (input[i])
    {
        if (input[i] >= '0' && input[i] <= '9' && input[0] >= '0' && input[0] <= '9')
            this->_num = true;
        i++;    
    }
    try
    {
        
        this->_value = std::atof(input);
    }
    catch (std::exception & e) { throw ProblemInput(); } 
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

//isnan Returns whether x is a NaN (Not-A-Number) value.
ConversionS::operator int() const
{
	int	conv = static_cast<int>(this->_value);

	if (isnan(conv) || !(std::numeric_limits<int>::min() <= conv && conv <= std::numeric_limits<int>::max()))
		throw (Problem());
   // int static
	return (conv);
   // int i = static_cast<int>(this->_value);
    //return (i);
    
}

ConversionS::operator char() const
{
	int	conv = static_cast<int>(this->_value);

	if (conv <= std::numeric_limits<char>::min() || conv >= std::numeric_limits<char>::max())
    {
        std::cout << "char: ";
		throw (Problem());
    }
	if (conv < 32 || conv > 126)
    {
        std::cout << "char: ";
		throw (ProblemDisplay());
    }
	return (static_cast<char>(conv));
}

float ConversionS::toFloat(void) 
{
	
	return (static_cast<float>(this->_value));
}

double ConversionS::toDouble(void) 
{
  //  std::cout << this->_value;
    double ret = static_cast<double>(this->_value);
	return (ret);
}