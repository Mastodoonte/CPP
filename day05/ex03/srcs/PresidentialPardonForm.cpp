/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 13:59:46 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 24, 5, "no_name_target") 
{
  std::cout << "Construction of  " << this->getName()  << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target) 
{
  this->_target = target;
  std::cout << "Construction of " << this->getName()  << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

  std::cout << "Destruction of " << this->getName() << " form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
  std::cout << "Construction by copy of " << this->getName()  << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm  const &src)
{
  std::cout << "Assignation operator called " << this->getName()  << std::endl;
  if (this == &src)
		return (*this);
  std::string src_target = src.getTarget();
	this->setTarget(src_target);
	return (*this);
}

void	 PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
  (void)executor;
  std::cout << "Presidentation pardon form called" << std::endl;
  std::cout << this->getTarget() << " is being forgiven by our dear Zaphod Beeblebrox" << std::endl;
}