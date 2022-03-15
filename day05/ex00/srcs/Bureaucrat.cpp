/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:06:17 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/14 13:49:39 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int rank) : _name(name)
{
  if (rank > 150)
    throw GradeTooLowException(); 
  else if (rank < 1)
     throw GradeTooHighException();
  else
  {
    _rank = rank;
    std::cout << "Constructor of Bureaucrat " << this->getName() << " and rank parameter is " << this->getGrade() << std::endl;
  }
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Destructor of Bureaucrat " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
  *this = src;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &src)
{
  this->_rank = src._rank;
  return (*this);
}


std::string Bureaucrat::getName(void) const 
{
  return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
  return (this->_rank);
}

void    Bureaucrat::incrementB(void)
{
  std::cout << "Function of incrementation has been called for " << this->getName() << std::endl;
  if (this->_rank == 1)
  {
    throw GradeTooHighException();
  }
  else
  {
    this->_rank--;
    std::cout << "His new grade is " << this->_rank <<  std::endl;
  }
}

void    Bureaucrat::decrementB(void)
{
  std::cout << "Function of decrementation has been called for " << this->getName() << std::endl;
  if (this->_rank == 150)
  {
    throw GradeTooLowException();
  }
  else
  {
    this->_rank++;
    std::cout << "His new grade is " << this->_rank <<  std::endl;
  }
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{
  Bureaucrat const *tmp = &src;
  
  if (tmp == NULL)
      return (o);
  o << src.getName() << " bureaucrat grade " << src.getGrade() << std::endl;
  return (o);
}
