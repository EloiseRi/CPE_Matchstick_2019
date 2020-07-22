/*
** EPITECH PROJECT, 2019
** utils
** File description:
** functions needed for the my_printf
*/

#include "my.h"

void my_putchar(char const *c)
{
    write(1, &c, 1);
}