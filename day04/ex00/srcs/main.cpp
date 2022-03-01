/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:14:22 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/21 16:48:35 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.h"
#include "../include/Dog.h"
#include "../include/Cat.h"
#include "../include/WrongAnimal.h"
#include "../include/WrongCat.h"

int main(void)
{
    const Animal* meta = new Animal(); //Instanciation possible with Animal
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
   std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! 
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    //Test for Wrong class not implemented with virtual which allows to overplant a function like overload but with pointers, otherwise, the mother function will be executed, here is the example//
    std::cout << std::endl << "[ OWN TEST ]" << std::endl;

    std::cout << std::endl << "[ Same initialisation but the keyword virtual has been removed from Makesound of animal and from the destructor ]" << std::endl;
    const WrongAnimal *test = new WrongAnimal();
    const WrongAnimal *test1 = new WrongCat();
    
    std::cout << std::endl << "[ Make sound ]" << std::endl;
    test->makeSound();
    test1->makeSound();
    
    std::cout << std::endl << "[ Destruction ]" << std::endl;
    delete test;
    delete test1;
     
    return 0;
}