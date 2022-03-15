/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:16:12 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/15 20:53:57 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include <cstdlib> //for rand
#include <ctime>   //for time
#include <iostream>
#include <string>
#include <typeinfo> //https://en.cppreference.com/w/cpp/types/bad_cast#:~:text=class%20bad_cast%20%3A%20public%20std%3A%3A,not%20exist%20in%20the%20locale.

                             /*| uintptr_t |*/
Base *generate(void)
{
    Base *target = NULL;
    /* cast necessary on srand otherwise lost of precision because time() returns 
    a long which is larger than an unsigned int on our target.
     In order to workaround this problem, we need to 
     cast the result :*/
    // // std::srand(std::time(NULL)); <= Bad way
    srand( static_cast<unsigned int>(std::time(NULL)));
    long int ret = rand();

    std::cout << " Random number chosen: " << ret;
    std::cout << ret;
    if ((ret % 3) == 0)
    {
        std::cout << " Class A choosen" << std::endl;
        target = new A;
    }
    else if ((ret % 3 ) == 1)
    {
        std::cout << " Class B choosen" << std::endl;
        target = new B;
    }
    else if ((ret % 3) == 2)
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
    catch (const std::bad_cast& e)
    {
        std::cout << e.what() << '\n';;
    }
    try 
    {
        Base test = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl; 
    }
    catch (const std::bad_cast& e)
    {
        std::cout << e.what() << '\n';;
    }
    try 
    {
        Base test = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (const std::bad_cast& e) 
    {
        std::cout << e.what() << '\n';;
    }
}
int main ()
{
  std::cout << "|========================================================================|" << std::endl;
  std::cout << "                     GENERATE RANDOM CLASS" << std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  Base *b1 = generate();
  std::cout << "|========================================================================|" << std::endl;
  std::cout << "                 POINTER IDENTIFICATION" << std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  identifyP(b1);
  std::cout << "|========================================================================|" << std::endl;
   std::cout << "|========================================================================|" << std::endl;
  std::cout << "                 REFERENCE IDENTIFICATION" << std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  identifyR(*b1);
  std::cout << "|========================================================================|" << std::endl;
}