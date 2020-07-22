/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** putnbrbase
*/

#include "my.h"

void my_putnbr_base(unsigned long nb, char *base)
{
    int rest;

    rest = nb % my_strlen(base);
    nb = nb / my_strlen(base);
    if (nb > 0)
        my_putnbr_base(nb, base);
    write(1, &base[rest], 1);
}