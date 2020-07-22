/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** compare n char
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for ( i; s1[i] == s2[i] && s1[i] != '\0' && i < n - 1; i++);
        return (s1[i] - s2[i]);
}
