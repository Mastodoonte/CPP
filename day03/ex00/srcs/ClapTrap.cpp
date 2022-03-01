/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:13:49 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 15:53:53 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.h"

ClapTrap::ClapTrap()
{
  std::cout << "Basic Construtor without name" <<  std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),  _hitsPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout << "ClapTrap " << this->_name << " construction" << std::endl;
}
ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << this->_name << " destruction" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap  & src)
{
  std::cout << "ClapTrap Operator of copy has been called" << std::endl;
  *this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
  std::cout << "ClapTrap Operator of assignation has been called" << std::endl;
  this->_name = src._name;
  this->_hitsPoints = src._hitsPoints;
  this->_attackDamage = src._attackDamage;
  this->_energyPoints = src._energyPoints;
  return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
  unsigned int energy_left = this->get_ep();
  if (energy_left > 0)
  {
    std::cout << "ClapTrap " << this->_name << " attacks " << target << "and involve " << this->_attackDamage << " points of damage" << std::endl;
    _energyPoints--;
  }
  else
  {
    std::cout << "ClapTrap " << this->_name << " tries to attack but has not enough energy points" << std::endl;
  }
  
}

void    ClapTrap::takeDamage(unsigned int amount)
{
  int hp = this->get_hp();
  if (hp > amount )
  {
    this->set_hp(hp - amount);
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage" << std::endl;
  }
  else
  {
    this->set_hp(0);
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage and is dead " << std::endl;
  }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
  unsigned int energy_left = this->get_ep();
  if (energy_left > 0)
  {
    unsigned int reparation = this->get_hp() + amount;
    this->_hitsPoints = reparation;
    _energyPoints--;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " of reparation " << std::endl;
  }
  else
  {
    std::cout << "ClapTrap " << this->_name << " tries to repare but has not enough energy points" << std::endl;
  }
}
std::string    ClapTrap::get_name(void)
{
  return (this->_name);
}


unsigned int    ClapTrap::get_hp(void)
{
  return (this->_hitsPoints);
}

unsigned int    ClapTrap::get_ep(void)
{
  return (this->_energyPoints);
}

unsigned int    ClapTrap::get_ad(void)
{
  return (this->_attackDamage);
}

void    ClapTrap::set_name(std::string name)
{
    this->_name = name;
}

void            ClapTrap::set_hp(unsigned int hp)
{
    this->_hitsPoints -= hp;
}
void            ClapTrap::set_ep(unsigned int ep)
{
    this->_energyPoints -= ep;
}

void            ClapTrap::set_ad(unsigned int ad)
{
    this->_attackDamage -= ad;
}

//std::ostream & operator<<(std::ostream & cout, ClapTrap const & i)
///{
 // cout  << "ClapTrap " << i.get_name() << " attacks" << " a definir" << ", causing";
//}
