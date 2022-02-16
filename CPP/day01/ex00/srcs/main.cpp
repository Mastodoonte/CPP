/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:55:33 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 10:12:58 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    randomChump("zombie_stack");
    Zombie *zombie_heap = newZombie("zombie_heap");
    if (!zombie_heap)
    {
        std::cout << "problem allocation" << std::endl;
        return (0);
    }
    zombie_heap->announce();
    delete(zombie_heap);
    return (0);
}