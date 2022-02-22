/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:46 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/21 15:35:13 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog & src); //Constructeur par copie
    Dog & operator=(Dog const & src); //Assignation 
    
    virtual void    makeSound(void) const;


private:

};

#endif