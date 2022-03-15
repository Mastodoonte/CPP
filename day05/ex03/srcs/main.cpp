/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/14 14:05:34 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"


int main()
{
	std::cout << "[ --MANDATORY PART-- ]" << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;

	
	std::cout << std::endl << "[ --OWN TEST-- ]" << std::endl;
	std::cout << "[ --INIT INTERN AND FORM-- ]" << std::endl;
	Intern internmaster;
	Bureaucrat ceo("Elon Musk", 1);

	std::cout << std::endl << "[ --INTERN DO ITS JOB-- ]" << std::endl;
	std::cout << std::endl << "[   Here instead of instanciate by new, interne do it ]" << std::endl;
	Form      *form1 = internmaster.makeForm("presidential form", "test1");
	Form      *form2 = internmaster.makeForm("robotomy request", "test2");
	Form      *form3 = internmaster.makeForm("shrubbery request", "test3");	
	
	std::cout << std::endl << "[ --FAIL OF CREATION-- ]" << std::endl;
	Form      *form4 = internmaster.makeForm("NoExist", "test3");
	std::cout << *form4;
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
