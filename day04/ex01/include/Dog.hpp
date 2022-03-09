/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:46 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 10:41:13 by florianmast      ###   ########.fr       */
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
    ~Dog();
    Dog(const Dog & src);
    Dog &operator=(const Dog &src);  
    
    void    makeSound(void) const;
    Brain *get_brain(void) const;


private:
    Brain *_brain;
};

#endif