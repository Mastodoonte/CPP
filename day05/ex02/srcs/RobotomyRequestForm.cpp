/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 12:16:19 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "no_name_target") 
{
  std::cout << "Construction of " << this->getName()  << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) 
{
  std::cout << "Construction of " << this->getName()  << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "Destruction of " << this->getName() << " form" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
  std::cout << "Construction by copy of " << this->getName()  << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm  const &src)
{
  std::cout << "Assignation operator called " << this->getName()  << std::endl;
  if (this == &src)
		return (*this);
  std::string src_target = src.getTarget();
	this->setTarget(src_target);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
  int ret = rand();
  std::cout << "Robot request form called" << std::endl;
  std::cout  << " BRAAAAAAAAAAAAAAAAAAAAAAAH" << std::endl;
  if (ret == 0)
  {
    std::cout << this->getTarget() << " Got robotomised" << std::endl;
  }
  else
    std::cout << this->getTarget() << " Has been saved by the holy god of Robotomy" << std::endl;
}