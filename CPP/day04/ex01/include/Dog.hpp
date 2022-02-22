/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:46 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 11:01:04 by florianmast      ###   ########.fr       */
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
    virtual Dog &operator=(const Dog & src);
    virtual Animal &operator=(const Animal & src); //Assignation     
    
    virtual void    makeSound(void) const;
    virtual Brain *get_brain(void) const;


private:
    Brain *_brain;
};

#endif