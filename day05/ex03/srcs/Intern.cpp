/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/14 12:04:38 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
  std::cout << "Construction of Intern"  << std::endl;
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

Form*	Intern::makeForm(std::string formname, std::string target)
{
	std::string	index [3] = {"shrubbery request",	"robotomy request", "presidential request"};
	try
	{
		{
			int i = -1;
			while (++i < 3)
			{
				if (formname == index[i])
				{
					std::cout << "Intern is creating the " << index[i] << ", thanks him !" << std::endl;
					break;
				}
			}
			switch (i)
			{
				case 0: return (new ShrubberyCreationForm(target));
				case 1: return (new RobotomyRequestForm(target));
				case 2: return (new PresidentialPardonForm(target));
				case 3: throw NoMatchingException();
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Intern FAILED to create <" << formname << "> form (seems that is doesn't exist)" << std::endl << std::endl;
	return (NULL);
}