/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 11:59:37 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int	main()
{
    std::cout << "[ --INIT EMPLOYEE AND FORM-- ]" << std::endl;
  
  Bureaucrat test1("Elon Musk", 1);
  Bureaucrat test2("Midlle employee", 75);
  Bureaucrat test3("Basic employee", 149);
  
  Form      *form1 = new PresidentialPardonForm("Jardin");
  Form      *form2 = new ShrubberyCreationForm("test2");
  Form      *form3 = new RobotomyRequestForm("test3");
  
  std::cout << std::endl << "[ --TRY TO FIRM SUCESSFULLY-- ]" << std::endl;
  test1.signForm(*form1);
  
  std::cout << std::endl << "[ --TRY TO EXECUTE SUCCESSFULLY-- ]" << std::endl;
  test1.executeForm(*form1);
  
  std::cout << std::endl << "[ -- FIRM UNSUCCESSFULLY BECAUSE NOT ALLOWED-- ]" << std::endl;
  test3.signForm(*form2);
  
   std::cout << std::endl << "[ --TRY TO EXECUTE BUT NOT FIRMED-- ]" << std::endl;
  test2.executeForm(*form2);
  test1.signForm(*form1);
  
   std::cout << std::endl << "[ --FIRM EVERTHING AND TEST ALL-- ]" << std::endl;
  test1.signForm(*form2);
  test1.executeForm(*form3);
  
  std::cout << std::endl << "[ -- DO THEM ALL-- ]" << std::endl;
  test1.executeForm(*form2);
  test1.executeForm(*form3);
    
  std::cout << std::endl << "[ --DESTRUCTOR CALL-- ]" << std::endl;
  delete form1;
  delete form2;
  delete form3;
}