/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:25:19 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 15:51:27 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.h"

ScavTrap::ScavTrap()
{
  std::cout << "Basic Construtor ScavTrap without name" <<  std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
  _name = name;
  _hitsPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  this->guard = 0;
  std::cout << "ScavTrap robot " << this->_name << " construction" << std::endl;
}

ScavTrap::~ScavTrap()
{
   std::cout << "ScavTrap robot " << this->_name << " destruction" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap::ClapTrap(src)
{
  std::cout << "ScavTrap Operator of copy has been called" << std::endl;
  *this = src;;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
  std::cout << "ScavTrap robot Operator of assignation has been called" << std::endl;
  this->_name = src._name;
  this->_hitsPoints = src._hitsPoints;
  this->_attackDamage = src._attackDamage;
  this->_energyPoints = src._energyPoints;
  
  return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
  unsigned int energy_left = this->get_ep();
  if (energy_left > 0)
  {
    std::cout << "ScavTrap " << this->_name << " attacks " << target << "and involve " << this->_attackDamage << " points of damage" << std::endl;
    _energyPoints--; 
  }
  else
  {
    std::cout << "ScavTrap " << this->_name << " tries to attack but has not enough energy points" << std::endl;
  }
}

void ScavTrap::guardGate(void)
{
  if (this->guard == 1)
  {
    this->guard = 0;
    std::cout << "I am not standing guard anymore " << std::endl;
  }
  else if (this->guard == 0)
  {
    this->guard = 1;
    std::cout << "I am standing guard " << std::endl;
  }
}