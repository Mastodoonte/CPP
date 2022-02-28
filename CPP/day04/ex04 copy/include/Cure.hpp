/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:01:14 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 14:07:55 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H
#include <iostream>
#include <string>
#include "AMateria.hpp"

/*Implémentez les Materias Ice (glace) et Cure (soin) sous forme de classes concrètes. 
Utilisez leur noms en minuscules ("ice" pour Ice, "cure" pour Cure) comme types. 
Bien sûr, leur fonction membre clone() retournera une nouvelle instance de même type 
(en clonant une Materia Ice, on obtient une autre Materia Ice).*/

class Cure : public AMateria
{
public:
    Cure();
    Cure(std::string const &type);
    ~Cure();
    Cure(Cure const &src);                       //Constructeur par copie
    Cure &operator=(Cure const &src);             //Assignation 

    virtual AMateria *clone() const;        // From the abstract class AMateria
    virtual void use(ICharacter &target);
    
private:

};

#endif