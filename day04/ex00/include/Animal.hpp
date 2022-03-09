/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:51 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 09:45:13 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


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