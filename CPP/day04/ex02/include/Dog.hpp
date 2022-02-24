/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:46 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 17:31:38 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog & src); //Constructeur par copie
    Dog &operator=(const Dog & src);
   // virtual Animal &operator=(const Animal & src); //Assignation     
    
    void    makeSound(void) const;
    Brain *get_brain(void) const;


private:
    Brain *_brain;
};

#endif