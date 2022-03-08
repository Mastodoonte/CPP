/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:55:10 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/08 16:01:33 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
#define BASE_H
#include <iostream>


class Base
{
public:
    virtual ~Base();
   
private:

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif 