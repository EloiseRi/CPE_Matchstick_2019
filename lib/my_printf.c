/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** print ... %d, %i, %c, %s
*/

#include "my.h"

int my_printf(char *type, ...)
{
    char *flags[] = {"%i", "%d", "%s", "%c", "%b", "%o", "%x", "%X",
    "%p", "%u", "%S", NULL};
    F_PTR tab_ptr[11] = {my_put_nbr, my_put_nbr, my_putstr, my_putchar,
    my_binary, my_octal, my_hexalow, my_hexaup, my_adress,
    my_absolval, my_upper_s};

    va_list list;
    va_start(list, type);
    for (int j = 0; type[j] != '\0'; j++) {
        if (type[j] == '%') {
            for (int i = 0; flags[i] != NULL; i++) {
                if (my_strncmp(flags[i], (&type[j]), 2) == 0) {
                    tab_ptr[i](va_arg(list, void *));
                    j++;
                }
            }
        } else
            write(1, (&type[j]), 1);
    }
    va_end(list);
}