/*
** EPITECH PROJECT, 2019
** my_adress
** File description:
** display adress of a pointer
*/

#include "my.h"

void my_adress(void *ptr)
{
    my_putstr("0x");
    my_hexalow((long)ptr);
}