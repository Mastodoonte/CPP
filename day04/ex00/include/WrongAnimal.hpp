/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:51 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 09:58:35 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
public:
    WrongAnimal();
    //L'appel dynamique permet d'augmenter la réutilisabilité en autorisant le « vieux » code à appeler du nouveau code.
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const & src); //Constructeur par copie
    WrongAnimal & operator=(WrongAnimal const & src); //Assignation 
    
    const std::string &getType(void) const;
    void    makeSound(void) const;
    
protected:
    std::string _type;

};

#endif