/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:54:59 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 15:45:58 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.h"

FragTrap::FragTrap()
{
  std::cout << "Basic Construtor FragTrap without name" <<  std::endl;
  _guard = 0;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
  _name = name;
  _hitsPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  _guard = 0;
  std::cout << "FragTrap " << this->_name << " construction" << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << this->_name << " destruction" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap::ClapTrap(src)
{
  std::cout << "FragTrap Operator of copy has been called" << std::endl;
  *this = src;;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
  std::cout << "FragTrap robot Operator of assignation has been called" << std::endl;
  this->_name = src._name;
  this->_hitsPoints = src._hitsPoints;
  this->_attackDamage = src._attackDamage;
  this->_energyPoints = src._energyPoints;
  
  return (*this);
}

void    FragTrap::attack(const std::string& target)
{
  unsigned int energy_left = this->get_ep();
  if (energy_left > 0)
  {
    std::cout << "FragTrap " << this->_name << " attacks " << target << "and involve " << this->_attackDamage << " points of damage" << std::endl;
    this->_hitsPoints--;
  }
  else
  {
    std::cout << "FragTrap " << this->_name << " tries to attack but has not enough energy points" << std::endl;
  }
}

void FragTrap::guardGate(void)
{
  if (this->_guard == 1)
  {
    this->_guard = 0;
    std::cout << "I am not standing guard anymore " << std::endl;
  }
  else if (this->_guard == 0)
  {
    this->_guard = 1;
    std::cout << "I am standing guard " << std::endl;
  }
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "Give me five mate ! " << std::endl; 
}


