/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:19:24 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 11:38:45 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
  std::cout << "Default constructor of Brain" << std::endl;
  return ;
}

Brain::~Brain()
{
  std::cout << "Destructor of Brain" << std::endl;
  return ;
}

Brain::Brain(const Brain & src)
{
  std::cout << "Copy constructor of Brain" << std::endl;
  *this = src;
}

/*Brain & Brain::operator=(Brain const & src)
{
  int i = 0;
  std::cout << "Assignation of Brain" << std::endl;
  return (0);
}*/