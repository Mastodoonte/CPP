/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/02 10:18:49 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main(void)
{
  std::cout << "[ --FIRST TRY-- ]" << std::endl;
  
  Bureaucrat test1("Elon Musk", 101);
  Form      form1("Disclosure agreement", 150, 50);
  
  test1.signForm(form1);
  test1.signForm(form1);
  std::cout << form1;

  std::cout << "[ --SECOND TRY-- ]" << std::endl;
  
  Bureaucrat test2("Franky the intern", 101);
  Form      form2("agreement TOP SECRET", 50, 1);
  
  test2.signForm(form2);
  std::cout << form1;
  std::cout << std::endl << "[ --DESTRUCTOR CALL-- ]" << std::endl;
  return (0);
}