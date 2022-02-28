/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:00:29 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 10:58:39 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
  std::cout << "Default constructor of Ice" << std::endl;
}

Ice::~Ice()
{
  std::cout << "Destructor of Ice" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
  *this = src;
  std::cout << "Constructor by copy initialised" << std::endl;
}

Ice & Ice::operator=(Ice const & src)
{
  this->_item = src._item;
  std::cout << "Assignation operator for class Ice is called" << std::endl;
  return (*this);
}

/*Display function =>  Ice : "* shoots an ice bolt at <name> *" */
void  Ice::use(ICharacter &target)
{
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
AMateria *Ice::clone(void) const
{
  return (new Ice(*this));
}
