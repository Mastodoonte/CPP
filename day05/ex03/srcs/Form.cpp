/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 13:53:03 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include <fstream>

Form::Form() : _name("No_name"), _signed(false), _rankToSign(150), _rankToExec(150), _target("No_name_target")
{
  std::cout << "Default contructor of Form" << std::endl;
}

Form::Form(std::string name, int rankToSign, int rankToExec, std::string target) : _name(name), _signed(false), _target(target)
{
  if (rankToExec < 1 || rankToSign < 1)
    throw Form::GradeTooHighException();
  else if (rankToExec > 150 || rankToSign > 150)
    throw Form::GradeTooLowException();
  else
  {
    _rankToSign = rankToSign;
     _rankToExec = rankToExec;
  }
    std::cout << "Constructor of Form: " << _name << " with rank to signe at : " << _rankToSign << " with rank to execute at "
    << _rankToExec << std::endl; 
}

Form::~Form()
{
  std::cout << "Destructor of Form: " << _name << std::endl; 
}

Form::Form(const Form &src)
{
  this->_name =src._name;
  this->_rankToExec = src._rankToExec;
  this->_rankToSign = src._rankToSign;
  this->_signed = src._signed;
  std::cout << "Copy constructor called for: " << _name << std::endl; 
  
}

Form & Form::operator=(Form const &src)
{
  this->_name = src._name;
  this->_rankToExec = src._rankToExec;
  this->_rankToSign = src._rankToSign;
  this->_signed = src._signed;
  std::cout << "Assignation operator for:  " << _name << std::endl; 
  return (*this);
}

std::string Form::getName(void) const
{
  return (this->_name);
}

std::string		Form::getTarget(void) const
{
  return (this->_target);
}

void        Form::setTarget(std::string target)
{
  this->_target = target;
}
bool        Form::getIfSigned(void) const
{
  return (this->_signed);
}

int         Form::getIfRankToSigned(void) const
{
  return (this->_rankToSign);
}

int         Form::getIfRankToExec(void) const
{
  return (this->_rankToExec);
}

/*e beSigned() prenant un Bureaucrat en paramètre. 
Il doit changer le status du formulaire en signé si l’échelon du Bureaucrat
est suffisant (supérieur ou égal à l’échelon requis).*/
void    Form::beSigned(Bureaucrat const &person)
{
  if (person.getGrade() > (this->_rankToSign))
  {
    throw Form::GradeTooLowException();
  }
  else if (getIfSigned() == true)
  {
    throw Form::FormIsSigned();
  }
  else
  {
    this->_signed = true;
    std::cout << person.getName() << " sign " << this->getName() << std::endl;
  }
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
  o << std::endl << "|== INFO OF FORM ==|" << std::endl;
  o << "|==     NAME     ==|" << std::endl;
  o << "" << src.getName() << "" << std::endl;
  o << "|== RANK TO SIGN ==|" << std::endl;
  o << "       " << src.getIfRankToSigned() << "     " << std::endl;
  o << "|== IS IT SIGNED ==|" << std::endl;
  o << "       " << src.getIfSigned() << "       " << std::endl;
  o << "|== RANK NEEDED  ==|" << std::endl;
  o << "       " << src.getIfRankToExec() << "       " << std::endl ;
  o << "|==================|" << std::endl << std::endl;
  return (o);
}

void		Form::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
  {
		throw Form::FormIsNotSigned();
  }
	else if (executor.getGrade() > this->_rankToExec)
  {
  		throw Form::GradeTooLowException();
  }
  else
    execute(executor);
}