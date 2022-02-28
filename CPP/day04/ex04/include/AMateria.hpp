/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:58:50 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 09:52:12 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;


/* Abstact class which allows Ice and Cure to be created with obligatory methods 
and have a access to a declaration to the protected "donnée membre" -> _type*/
class AMateria
{
public:
    AMateria(const std::string &type);              //Constructeur Unique with string
    virtual ~AMateria(){};    
 //   AMateria(AMateria const & src);                 //Constructeur par copie
   // AMateria &operator=(AMateria const & src);     //Assignation 
    
    const std::string &getType(void) const;            //Returns the materia type
    
    virtual AMateria *clone(void) const = 0;            /*Make a abstract class and all classes inherited 
                                                     needs this clone method it is Pure virtual function. */
    
    virtual void use(ICharacter& target) = 0;       // Same than clone

protected:
    std::string _item;

};

#endif