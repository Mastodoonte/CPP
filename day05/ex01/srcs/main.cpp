/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/14 13:54:56 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main(void)
{
  std::cout << std::endl << "[ --FIRST TRY NOT ALLOWED TO SIGN-- ]" << std::endl;
  Bureaucrat test1("Elon Musk", 101);
 try
  {
     Form      form1("Disclosure agreement", 100, 50);
     test1.signForm(form1);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  std::cout << std::endl << "[ --SECOND TRY BUT SET OF FORM NOT CONFORM-- ]" << std::endl;
  try
  {
     Form      form2("Disclosure agreement", 1000, 50);
     std::cout << form2;
     test1.signForm(form2);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  std::cout << std::endl << "[ --THIRD TRY GOOD BUT TRYING TO SIGN TWO TIMES-- ]" << std::endl;
  try
  {
    Form  form3("Disclosure agreement", 150, 150);
    test1.signForm(form3);
    std::cout << std::endl << "[(try to sign again)]" << std::endl;
    test1.signForm(form3);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

 std::cout << std::endl << "[ --LAST BUT THE BEST-- ]" << std::endl;
 try
 {
   Bureaucrat test2("Franky the intern", 101);
   Form       form2("agreement TOP SECRET", 150, 149);
   test2.signForm(form2);
   std::cout << form2 << std::endl;
 }
 catch(const std::exception& e)
 {
   std::cerr << e.what() << '\n';
 }
  std::cout << std::endl << "[ --DESTRUCTOR CALL-- ]" << std::endl;
  return (0);
}