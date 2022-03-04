/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 12:18:15 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "no_name_target") 
{
  std::cout << "Construction of " << this->getName()  << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) 
{
  std::cout << "Construction of " << this->getName()  << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

  std::cout << "Destruction of " << this->getName() << " form" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
  std::cout << "Construction by copy of " << this->getName()  << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm  const &src)
{
  (void)src;
  std::cout << "Assignation operator called " << this->getName()  << std::endl;
  return (*this);
}

//https://asciiart.website//index.php?art=plants/trees//
//c_str put null terminated at the end
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
  std::ofstream	fd;
  
 // fd.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::app); (append)
  fd.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::trunc);
  if (fd.fail())
  {
    throw FormIsNotOpenable();
  }
  else
  {
    fd << "       _-_" << std::endl;
    fd << "    /~~   ~~\\ " << std::endl;
    fd << " /~~         ~~\\ " <<  std::endl;
    fd << "{               }  "<< std::endl;
    fd << " \\  _-     -_  / " << std::endl;
    fd << "  ~  \\ //  ~ " << std::endl;
    fd << " _- - | | _- _ " << std::endl;
    fd << "  _ - | |   -_ " << std::endl;
    fd <<  "    // \\ " << std::endl;
    }
    fd.close();
}