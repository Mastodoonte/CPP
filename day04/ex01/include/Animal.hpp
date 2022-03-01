/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:51 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/24 09:59:24 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"


class Animal
{
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const & src); //Constructeur par copie
    Animal & operator=(Animal const & src); //Assignation 
    
    const std::string &getType(void) const;
    virtual void    makeSound(void) const;
    
protected:
    std::string _type;

};

#endif