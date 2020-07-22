/*
** EPITECH PROJECT, 2020
** check_error
** File description:
** check_error
*/

#include "../include/matchstick.h"

int check_error_l(stick_t *game)
{
    if (game->in_line > game->line || game->in_line < 1) {
        my_printf("Error: this line is out of range\n");
        game->state = 0;
        return (0);
    }
    return (1);
}

int check_error_m(stick_t *game)
{
    if (game->in_match < 1) {
        my_printf("Error: you have to remove at least one match\n");
        game->state = 0;
        return (0);
    }
    if (game->in_match > game->match) {
        my_printf("Error: you cannot remove more than %d matches per turn\n", \
        game->match);
        game->state = 0;
        return (0);
    }
    return (1);
}

int verify_input(stick_t *game, char *str)
{
    for (int i = 0; str[i] != '\n'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            my_printf("Error: invalid input (positive number expected)\n");
            game->state = 0;
            return (0);
        }
    }
    return (1);
}