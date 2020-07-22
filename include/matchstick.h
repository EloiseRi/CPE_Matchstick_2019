/*
** EPITECH PROJECT, 2020
** matchstick.h
** File description:
** matchstick
*/

#ifndef MATCHSTICK
#define MATCHSTICK

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

typedef enum {
    true,
    false
} bool;

typedef struct stick_s {
    int line;
    int column;
    int match;
    int match_max;
    char **board;
    int in_line;
    int in_match;
    int state;
    int turn;
} stick_t;

int main(int ac, char **av);

/* Matchstick.c */
int take_input(stick_t *game);
int take_inputtwo(stick_t *game);
int matchstick(stick_t *game);

/* Map_gestion.c */
void put_matches(stick_t *game);
void create_map(stick_t *game);
void display_map(stick_t *game);
void remove_matches(stick_t *game);

/* Check_error.c */
int check_error_l(stick_t *game);
int check_error_m(stick_t *game);
int verify_input(stick_t *game, char *str);

#endif /* !MATCHSTICK */
