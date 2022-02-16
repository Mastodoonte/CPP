/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:55:33 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 10:27:30 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    //Heap dynamic allocation / Stack explotation system allocation 
    randomChump("zombie_stack");
    Zombie *zombie_heap = newZombie("zombie_heap");
    if (!zombie_heap)
    {
        std::cout << "problem allocation" << std::endl;
        return (0);
    }
    //The zombie allocated on the heap can announce itself
    zombie_heap->announce();
    //The zombie is voluntary free at the end
    delete(zombie_heap);
    return (0);
}