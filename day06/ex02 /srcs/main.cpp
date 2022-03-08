/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:16:12 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/08 17:16:26 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

                             /*| uintptr_t |*/



Base *generate(void)
{
    int i;
    Base *target;

    srand (time(NULL));
    i = rand();
    std::cout << " Random number chosen: " << i;
    std::cout << i;
    if ((i % 3) == 0)
    {
        std::cout << " Class A choosen" << std::endl;
        target = new A;
    }
    else if ((i % 3 ) == 1)
    {
        std::cout << " Class B choosen" << std::endl;
        target = new B;
    }
    else if ((i % 3) == 2)
    {
        std::cout << " Class C choosen" << std::endl;
        target = new C;
    }
    return (target);
}

                                /*| uintptr_t |*/
/* 
* Ce cast se fera seulement à l'exécution avec vérification à l'exécution via le RTTI.
* Il faut que la classe ait une méthode au moins virtuelle.
* Si erreur il y a les conversion de pointeurs retournent NULL
* Avec référence on lance  l'exception std::bad_cast
*/
void identifyP(Base *p)
{
    if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

/*Ici la reference ne renvoie pas null*/

void identifyR(Base &p)
{
    try 
    {
        Base test = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &)
    {
        ;
    }
    try 
    {
        Base test = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl; 
    }
    catch (const std::exception &)
    {
        ;
    }
    try 
    {
        Base test = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (const std::exception &) 
    {
        ;
    }
}
int main ()
{
  std::cout << "|========================================================================|" << std::endl;
  std::cout << "                     GENERATE RANDOM CLASS"<< std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  Base *b1 = generate();
  std::cout << "|========================================================================|" << std::endl;
  std::cout << "                 POINTER IDENTIFICATIONL"<< std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  identifyP(b1);
  std::cout << "|========================================================================|" << std::endl;
   std::cout << "|========================================================================|" << std::endl;
  std::cout << "                 REFERENCE IDENTIFICATIONL"<< std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  identifyR(*b1);
  std::cout << "|========================================================================|" << std::endl;
}