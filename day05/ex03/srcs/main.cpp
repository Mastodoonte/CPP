/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 14:05:55 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"


int main()
{
	std::cout << "[ --INIT INTERN AND FORM-- ]" << std::endl;
	Intern internmaster;
	Bureaucrat ceo("Elon Musk", 1);

	std::cout << std::endl << "[ --INTERN DO ITS JOB-- ]" << std::endl;
	std::cout << std::endl << "[   Here instead of instanciate by new, interne do it ]" << std::endl;
	Form      *form1 = internmaster.makeForm("PresidentialPardonForm", "test1");
	Form      *form2 = internmaster.makeForm("RobotomyRequestForm", "test2");
	Form      *form3 = internmaster.makeForm("ShrubberyCreationForm", "test3");
	std::cout << std::endl << "[ --FAIL OF CREATION-- ]" << std::endl;
	Form      *form4 = internmaster.makeForm("NoExist", "test3");
	(void)*form4;

	std::cout << std::endl << "[ --THEN THE CEO CAN USE IT-- ]" << std::endl;
	ceo.signForm(*form2);
	ceo.executeForm(*form2);

	std::cout << std::endl << "[ --DESTRUCTOR CALL DYNAMIC AND STATIC-- ]" << std::endl;
	delete form1;
  	delete form2;
  	delete form3;
	return (0);
}
