/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:24:43 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 11:42:50 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*     zombieHorde(int N, std::string name)
{
   int i;

  Zombie *horde;
  horde = new Zombie[N];
  i = 0;
  while (i < N)
  {
     horde[i].set_name(name + " " + std::to_string(i));
     horde[i].announce();
     i++;
   }
   return (horde);
}