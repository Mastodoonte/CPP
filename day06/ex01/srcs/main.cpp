/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:16:12 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/08 15:26:17 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

                             /*| uintptr_t |*/
/* 
* C'est un type d'entier non signé qui est capable de stocker un pointeur de données.
* Ce qui signifie généralement qu'il a la même taille qu'un pointeur.
* Il est défini de manière facultative dans les normes C++11 et ultérieures.
* Une raison courante de vouloir un type entier qui peut contenir le type de pointeur
* d'une architecture est d'effectuer des opérations spécifiques aux entiers sur un pointeur,
* ou de masquer le type d'un pointeur en le fournissant comme un "handle" entier.
*
* l'interet encore de ce type non signé est que tous les pointeurs pointant vers void
* peut être converti en ce type, puis en void de nouveau en conservant le pointeur originel
*/


                        /*| Choix du reinterpret_cast |*/
/*
* Supprime à la compilation le caractère const ou volatile de la variable ciblée
* correspond au cast du #C,Il est le plus permissif. Il est dangereux puisque ne fournit pas de warning à la compilation, 
* mais l'exécution va crash, le cas commun -> le retypage. Upcast et Downcast est utilisé dans ce genre de cas
* Le dernier cas est la manipulation de pointeurs cependant ses resultats ne sont pas portables
*/



//Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t//
uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

//Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data//
Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main ()
{
 //On a créé une classe mais en réalité c'est juste pour tester
  Data      *data_ptr = new Data(42);

  std::cout << "|========================================================================|" << std::endl;
  std::cout << "  Memory Adress of Data" << data_ptr << std::endl;
  std::cout << "  Value of data = " << data_ptr->getData() << std::endl;
  std::cout << "|========================================================================|" << std::endl;
  std::cout << "                     SERIALIZE TO MAKE IT RAW"<< std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  uintptr_t ptr = serialize(data_ptr);
  std::cout << "  Here we are serializing the data into a specific pointer to make it raw \n  thanks to the reinterpret_cast\n " << std::endl;
  std::cout << "  Memory Adress of Data" << &ptr << std::endl;
  std::cout << "  Value of data = " << ptr << std::endl;
  std::cout << "|========================================================================|" << std::endl;
  std::cout << "                  DESERIALIZE TO MAKE IT BACK TO NORMAL"<< std::endl;
  std::cout << "|------------------------------------------------------------------------|" << std::endl;
  std::cout << "  From raw to normal / fron uintptr_t to int" << &ptr << std::endl;
  Data *data_ptr_compare = deserialize(ptr);
  std::cout << "  Memory Adress of Data" << data_ptr_compare << std::endl;
  std::cout << "  Value of data = " << data_ptr_compare->getData() << std::endl;
  std::cout << "|========================================================================|" << std::endl;
  if (data_ptr_compare == data_ptr)
  std::cout << "SUCESS" << std::endl;
  //Only one free because pointing to the same adress
  delete(data_ptr);
  //delete(data_ptr_compare);
return 0;
}