/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/03 14:27:44 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
  std::cout << "Construction of "  << std::endl;
}

Intern::~Intern()
{

  std::cout << "Destruction of Intern" << std::endl;
}

Intern::Intern(Intern const &src) 
{
  *this = src;
  std::cout << "Construction by copy of Interne "  << std::endl;
}

Intern &Intern::operator=(Intern  const &src)
{
  std::cout << "Assignation operator called For Intern" << std::endl;
  if (this == &src)
		return (*this);
	*this = src;
	return (*this);
}

Form*	Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makePardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}
typedef Form* (Intern::*formMaker) (std::string target);

Form*	Intern::makeForm(std::string fname, std::string target)
{
	Form*		form;
	std::string	index		[3] = {"Shrubbery Creation",	"Robotomy Request",		"Presidential Pardon"};
	formMaker	templates	[3] = {&Intern::makeShrubbery,	&Intern::makeRobotomy,	&Intern::makePardon};

	for (int i = 0; i < 3; i++)
	{
		if (fname == index[i])
		{
			form = (this->*templates[i]) (target);
			std::cout << "Intern SUCCEDED to create <" << index[i] << "> form." << std::endl << std::endl;
			return(form);
		}
	}
	std::cout << "Intern FAILED to create <" << fname << "> form. It's not in the template index." << std::endl << std::endl;
	return (NULL);
}