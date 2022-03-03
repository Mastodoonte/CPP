/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:18:56 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/03 14:31:26 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Character.hpp"
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
//TODO REVOIR LE MAIN 

int main() 
{
    //objet     src(inventaire) avec des new a l'interieur
   /* IMateriaSource* src = new MateriaSource(); // Instanciation 
    
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
    return 0;*/
	
	/*My Own test*/
   	std::string	name;
	
	std::cout << "[--BAG CREATION OF COMPETENCES--]" << std::endl << std::endl;
	IMateriaSource	*bag = new MateriaSource();
	Ice* ice = new Ice();
	Cure* cure = new Cure();
	Ice* ice2 = new Ice("ICEBOLT");
	Cure* cure2 = new Cure("STIMPAK");
	Ice* ice3 = new Ice("NO MORE");
		

	std::cout << std::endl << "[--ATTRIBUTION OF COMPETENCES ON BAG--]" << std::endl;
	bag->learnMateria(ice);
	bag->learnMateria(cure);
	bag->learnMateria(ice2);
	bag->learnMateria(cure2);
	
	std::cout << std::endl << "[--NO MORE SPACE INTO BAG--]" << std::endl;
	bag->learnMateria(ice3);
	
	std::cout << std::endl << "[--DESTROY BAG--]" << std::endl;
	delete ice;
	delete cure;
	delete ice2;
	delete cure2;
	delete ice3;
	
	std::cout << "--- [--FIRST TEST FINISHED FOR EQUIPIED COMPETENCES--]" << std::endl << std::endl;
	std::cout << std::endl << "--- [--SECOND TEST--]" << std::endl << std::endl;

	ICharacter*		Champion = new Character(name);
	ICharacter*		NPC = new Character("Dovahkiin");
	ICharacter*		Enemy = new Character("Illia");
	AMateria*		materia;

	std::cout << std::endl << "--- [   LEARNING   ] ---" << std::endl;
	materia = bag->createMateria("ice");
	NPC->equip(materia);
	materia = bag->createMateria("cure");
	Enemy->equip(materia);
	materia = bag->createMateria("ICEBOLT");
	Champion->equip(materia);
	materia = bag->createMateria("STIMPAK");
	Champion->equip(materia);
	std::cout << "--- [ END LEARNING ] ---" << std::endl;

	std::cout << std::endl << "--- [   USING   ] ---" << std::endl;
	NPC->use(0, *Champion);
	Enemy->use(0, *Champion);
	Champion->use(0, *NPC);
	Champion->use(1, *Enemy);
	std::cout << "--- [ END USING ] ---" << std::endl << std::endl;

	delete Enemy;
	delete NPC;
	delete Champion;
	delete bag;

	std::cout << std::endl << "--- [ End of the Simulation ] ---" << std::endl;

	return (0);
}