/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:27 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/21 18:46:32 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    ~Cat();
    Cat(const Cat & src); //Constructeur par copie
    Cat & operator=(Cat const & src); //Assignation 

    virtual void    makeSound(void) const;
    virtual Brain *get_brain(void) const ;

private:
    Brain *_brain ;

};

#endif