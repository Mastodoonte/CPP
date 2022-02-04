#include "Phonebook.hpp"

std::string    Phonebook::get_first_name(void) const
{
    return(this->first_name);
}

std::string    Phonebook::get_nickname(void) const  
{
    return(this->nickname);
}

std::string    Phonebook::get_phone(void) const
{
    return(this->phone_number);
}

std::string    Phonebook::get_secret(void) const
{
    return(this->darkest_secret);
}

void    Phonebook::set_first_name(std::string str)
{
    this->first_name = str;
    return ;
}

void    Phonebook::set_nickname(std::string str)
{
    this->nickname = str;
    return ;
}

void    Phonebook::set_phone(std::string str)
{
    this->phone_number = str;
    return ;
}

void    Phonebook::set_secret(std::string str)
{
    this->darkest_secret = str;
    return ;
}

