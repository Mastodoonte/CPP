#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include <cstdio>

/*class contact{
    private:
        std::string first_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

};*/

class Phonebook{

private:
 int   _nb_contact;
 std::string first_name;
 std::string nickname;
 std::string phone_number;
 std::string darkest_secret;
    
public:
    Phonebook(void);
    ~Phonebook(void);
    void    init_contact(int nb_contact);
    void    display(int i);
    void    new_contact(int i);
    int    look_for_contact(std::string i);
    void    arrange_info(std::string str);
    std::string    get_first_name(void) const;
    std::string    get_nickname(void) const;
    std::string    get_phone(void) const;
    std::string    get_secret(void) const;
    void    set_first_name(std::string);
    void    set_nickname(std::string) ;
    void    set_phone(std::string);
    void    set_secret(std::string);

};

#endif
