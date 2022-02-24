/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:19:30 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 17:30:59 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include <string>

class Brain
{
public:
    Brain();
    virtual ~Brain();
    Brain(Brain const & src); //Constructeur par copie
    Brain & operator=(Brain const & src);//Assignation 
    

protected:
    std::string *ideas[100];

};

#endif