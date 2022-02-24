/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:30:54 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/24 10:43:51 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
  std::cout << "Constructor MateriaSource" << std::endl;
}

MateriaSource::~MateriaSource()
{
  std::cout << "Destructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
  *this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
  *this = src;
  return (*this);
}