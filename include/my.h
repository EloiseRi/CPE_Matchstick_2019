/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Define utils
*/

#ifndef MY_H
#define MY_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int my_atoi(char *str);
void my_putchar(char const *c);
void my_putstr(char const *str);
void my_put_nbr(long nb);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char *str);
void my_putnbr_base(unsigned long nb, char *base);
int my_printf(char *type, ...);
void my_binary(unsigned long nb);
void my_hexalow(unsigned long nb);
void my_hexaup(unsigned long nb);
void my_octal(unsigned long nb);
void my_adress(void *ptr);
void my_absolval(unsigned long nb);
void my_upper_s(char const *str);
void my_pourcent(char *c);

typedef void (*F_PTR)();

#endif /* !MY_H*/