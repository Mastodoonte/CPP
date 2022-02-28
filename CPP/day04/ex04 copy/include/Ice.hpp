/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:00:34 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 14:02:15 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H
#include <iostream>
#include <string>
#include "AMateria.hpp"

/*Implémentez les Materias Ice (glace) et Cure (soin) sous forme de classes concrètes. 
Utilisez leur noms en minuscules ("ice" pour Ice, "cure" pour Cure) comme types. 
Bien sûr, leur fonction membre clone() retournera une nouvelle instance de même type 
(en clonant une Materia Ice, on obtient une autre Materia Ice).*/

class Ice : public AMateria
{
public:
    Ice();
    Ice(std::string const &type);
    ~Ice();
    Ice(Ice const & src);                       //Constructeur par copie
    Ice &operator=(Ice const &src);             //Assignation 

    virtual AMateria *clone() const;        // From the abstract class AMateria
    
    virtual void use(ICharacter &target);
    

private:

};

#endif