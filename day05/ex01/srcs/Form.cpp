/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/02 10:18:15 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(std::string name, int rankToSign, int rankToExec) : _name(name), _signed(false)
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
  *this = src;
  std::cout << "Assignation operator for:  " << _name << std::endl; 
  return (*this);
}

const std::string Form::getName(void) const
{
  return (this->_name);
}

const bool        Form::getIfSigned(void) const
{
  return (this->_signed);
}

const int         Form::getIfRankToSigned(void) const
{
  return (this->_rankToSign);
}

const int         Form::getIfRankToExec(void) const
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
    std::cout << "The form is just got signed" << std::endl;
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