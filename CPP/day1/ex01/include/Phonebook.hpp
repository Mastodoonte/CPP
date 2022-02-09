/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:59:50 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/08 14:59:51 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include <cstdio>
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m" 
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define NC "\e[0m"

class contact{
    private:
        std::string first_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void    set_first_name( std::string str);
    void    set_nickname(std::string str);
    void    set_phone( std::string str);
    void    set_secret(std::string str);
    void    arrange_info( std::string str);
    std::string    get_first_name(void);
    std::string     get_nickname(void);
    std::string     get_phone(void);
    std::string     get_secret( void);
};

class Phonebook{

private:
 int   _nb_contact;
 contact _contact[8];
    
public:
    Phonebook(void);
    ~Phonebook(void);
    void    init_contact(int nb_contact);
    void    display(int i);
    void    display_all(int i);
    void    new_contact(int i);
    int    look_for_contact(std::string i);


};

#endif
