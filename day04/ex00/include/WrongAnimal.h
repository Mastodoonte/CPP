/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:51 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/21 16:49:33 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>


class WrongAnimal
{
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const & src); //Constructeur par copie
    WrongAnimal & operator=(WrongAnimal const & src); //Assignation 
    
    const std::string &getType(void) const;
    void    makeSound(void) const;
    
protected:
    std::string _type;

};

#endif