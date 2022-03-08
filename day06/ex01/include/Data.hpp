/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:23:44 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/08 15:04:44 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

class Data
{
public:
    Data();
    Data(int data);
    ~Data();
    Data(const Data &src);
    Data &operator=(const Data &src);

    int getData(void);
   


private:
int _data;

};

#endif