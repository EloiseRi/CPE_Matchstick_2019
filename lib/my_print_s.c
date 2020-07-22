/*
** EPITECH PROJECT, 2019
** my_print_s
** File description:
** print the upper S
*/

#include "my.h"

void my_upper_s(char const *str)
{
    if (str == NULL) {
        my_putstr("(null)");
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 1 && str[i] <= 32) {
            write(1, "\\", 1);
        if (str[i] <= 7)
            write(1, "00", 2);
        else
            write(1, "0", 1);
        my_putnbr_base(str[i], "01234567");
        } else
            write(1, &str[i], 1);
    }
}