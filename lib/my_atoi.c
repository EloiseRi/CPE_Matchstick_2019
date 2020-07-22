/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
** convert str in false long cause it's an int ...
*/

#include "my.h"

int my_atoi(char *str)
{
    int nbr = 0;
    int i = 0;
    int check_neg = 1;

    if (str[i] == '+' || str[i] == '-') {
        if (str[i++] == '-')
            check_neg = -1;
    }

    for (; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (nbr * check_neg);
        if (i > 0)
            nbr = nbr * 10;
        nbr = nbr + (str[i] - '0');
    }
    return (nbr * check_neg);
}