/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "matchstick.h"

void my_free(stick_t *game)
{
    for (int i = 0; i != game->line; i++)
        free(game->board[i]);
    free(game->board);
}

int main(int ac, char **av)
{
    if (ac != 3) return (84);

    stick_t *game = malloc(sizeof(*game));
    game->line = my_atoi(av[1]);
    game->match = my_atoi(av[2]);
    if (game->line < 2 || game->line > 99 || game->match < 1) return (84);

    if (matchstick(game) != -1) return (game->turn);
    my_free(game);
    return (0);
}