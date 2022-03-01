/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:27 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/21 15:35:09 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
    Cat(void);
    ~Cat();
    Cat(const Cat & src); //Constructeur par copie
    Cat & operator=(Cat const & src); //Assignation 

    virtual void    makeSound(void) const;

private:

};

#endif