/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:06:17 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/03 11:00:04 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int rank) : _name(name)
{
  if (rank > 150)
    throw GradeTooLowException(); 
  else if (rank < 0)
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
  return ((this->_rank));
}

void    Bureaucrat::incrementB(void)
{
  std::cout << "Function of incrementation has been called for " << this->getName() << std::endl;
  if (this->_rank == 0)
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
  o << src.getName() << " bureaucrat grade " << src.getGrade() << std::endl;
  return (o);
}


void    Bureaucrat::signForm(Form &form)
{
  try
  {
     form.beSigned(*this);
  }
  catch(const std::exception& exeption)
  {
    std::cerr << this->_name << " couldn't sign " << form.getName() << " because ";
    std::cerr << exeption.what() << std::endl;
  }
 // std::cout << this->_name << " sign " << form.getName() << std::endl;
}


void			Bureaucrat::executeForm(const Form& form) 
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " cannot execute " << form.getName() << ": ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " executs " <<  form.getName() << std::endl;
}
