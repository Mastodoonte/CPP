/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:19:24 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 17:24:39 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
  std::cout << "Default constructor of Brain created" << std::endl;
  return ;
}

Brain::~Brain()
{
  std::cout << "Brain destruction" << std::endl;
  return ;
}

Brain::Brain(const Brain & src)
{
  std::cout << "Copy constructor of Brain" << std::endl;
  *this = src;
}

Brain & Brain::operator=(Brain const & src)
{
  std::cout << "Assignation operator of Brain" << std::endl;
  int i = 0;
  if (this == &src)
  {
    return (*this);
  }
  else
  {
    while (i < 100)
    {
      this->ideas[i] = src.ideas[i];
      i++;
    }
  }
  return (*this);
}