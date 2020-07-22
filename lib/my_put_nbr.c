/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** efergh
*/

#include "my.h"

void my_put_nbr(long nb)
{
    if (nb < 0 && nb != -2147483648) {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb < 10)
        my_putchar((void *) (nb + '0'));
    else if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((void *) (nb % 10) + '0');
    }
}