/*
** EPITECH PROJECT, 2019
** my_diff_base
** File description:
** diff base manangement
*/

#include "my.h"

void my_binary(unsigned long nb)
{
    my_putnbr_base(nb, "01");
}

void my_hexalow(unsigned long nb)
{
    my_putnbr_base(nb, "0123456789abcdef");
}

void my_hexaup(unsigned long nb)
{
    my_putnbr_base(nb, "0123456789ABCDEF");
}

void my_octal(unsigned long nb)
{
    my_putnbr_base(nb, "01234567");
}