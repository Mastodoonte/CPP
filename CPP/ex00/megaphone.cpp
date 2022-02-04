#include <iostream>


void    display(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        std::cout << str[i];
        i++;
    }
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while (i < ac)
        {
            display(av[i]);
            i++;
        }
        std::cout << "\n" ;
    }
    return (0);
}
