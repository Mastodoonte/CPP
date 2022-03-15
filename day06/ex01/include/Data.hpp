/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:23:44 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/15 20:13:03 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>
# include <cstdlib>
#include <stdint.h>

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