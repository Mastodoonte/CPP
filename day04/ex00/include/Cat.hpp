/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:27 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 09:45:35 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

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