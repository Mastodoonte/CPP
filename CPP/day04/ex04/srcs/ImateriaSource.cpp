/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:21:23 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/24 10:30:12 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ImateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
  std::cout << "Constructor ImateriaSource" << std::endl;
}

IMateriaSource::~IMateriaSource()
{
    std::cout << "Destructor IMateriaSource" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const & src)
{
  *this = src;
}

IMateriaSource & IMateriaSource::operator=(IMateriaSource const & src)
{
  *this = src;
  return (*this);
}