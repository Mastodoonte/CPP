/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/08 15:06:00 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

Data::Data()
{
    _data = 0;
    std::cout << "Default constructor of Data called" << std::endl;
}

Data::Data(int data)
 {
     this->_data = data;
     std::cout << "Default constructor of Data called" << std::endl;
 }
Data::~Data()
{
    std::cout << "Default constructor of Data called" << std::endl;
}

Data::Data(Data const &src)
{
    this->_data = src._data;
    
}

Data & Data::operator=(const Data &src)
{
    this->_data = src._data;
    return (*this);
}

int Data::getData(void)
{
    return (_data);
}