/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:00:42 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 10:29:21 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void randomChump( std::string name )
{ 
    //Here the zombie is declared on this scope without pointers 
    // so it would be destroyed at the end of this function call
    Zombie zombie_stack(name);
    zombie_stack.announce();
}