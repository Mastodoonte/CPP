/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/14 13:55:53 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"


Form::Form(void) : _name("no_name"), _signed(false),_rankToSign(150) , _rankToExec(150)
{
  std::cout << "Constructor of Form: " << _name << " with rank to signe at : " << _rankToSign << " with rank to execute at "
  << _rankToExec << std::endl; 
}
Form::Form(std::string name, int rankToSign, int rankToExec) : _name(name), _signed(false), _rankToSign(rankToExec), _rankToExec(rankToExec)
{
  if (rankToExec < 1 || rankToSign < 1)
    throw Form::GradeTooLowException();
  else if (rankToExec > 150 || rankToSign > 150)
    throw Form::GradeTooHighException();
  else
    std::cout << "Constructor of Form: " << _name << " with rank to signe at : " << _rankToSign << " with rank to execute at "
    << _rankToExec << std::endl; 
}

Form::~Form()
{
  std::cout << "Destructor of Form: " << _name << std::endl; 
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getIfSigned()), _rankToSign(src.getIfRankToSigned()), _rankToExec(src.getIfRankToExec())
{
  std::cout << "Copy constructor called for: " << _name << std::endl;
}

Form & Form::operator=(Form const &src)
{
  this->_signed = src._signed;
  std::cout << "Assignation operator for:  " << _name << std::endl; 
  return (*this);
}

std::string Form::getName(void) const
{
  return (this->_name);
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

/* beSigned() prenant un Bureaucrat en paramètre. 
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
    std::cout << person.getName() << " signed " << this->getName() << std::endl;
  }
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
  Form const *tmp = &src;

  if (tmp == NULL)
      return (o);
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