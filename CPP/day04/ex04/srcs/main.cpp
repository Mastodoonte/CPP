/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:18:56 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/25 18:35:59 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Amateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"



/*
* Creation d'un pointeur de vecteur d'objet 
*
*
*
*
*
*/

int main() 
{
    //objet     src(inventaire) avec des new a l'interieur
    IMateriaSource* src = new MateriaSource(); // Instanciation 
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob"); me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    return 0;
}