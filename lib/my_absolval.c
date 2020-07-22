/*
** EPITECH PROJECT, 2019
** absolu.c
** File description:
** display the %u
*/

#include "my.h"

void my_absolval(unsigned long nb)
{
    if (nb < 10)
        my_putchar((void *) (nb + '0'));
    else if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((void *) (nb % 10) + '0');
    }
}