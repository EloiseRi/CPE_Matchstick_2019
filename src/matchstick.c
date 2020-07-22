/*
** EPITECH PROJECT, 2020
** matchstick.c
** File description:
** matchstick
*/

#include "../include/matchstick.h"

int check_line(stick_t *game)
{
    int count = 0;

    for (int i = 0; i != game->column; i++)
        if (game->board[game->in_line][i] == '|')
            count++;

    if (count < game->in_match) {
        my_printf("Error: not enough matches on this line\n");
        game->state = 0;
        return (1);
    } else {
        remove_matches(game);
        my_printf("Player removed %d match(es) from line %d\n", \
        game->in_match, game->in_line);
        return (0);
    }
}

void play_ai(stick_t *game)
{
    int count = 0;

    while (count == 0) {
        game->in_line = random() % (game->line + 1);
        for (int b = 0; b != game->column; b++)
            if (game->board[game->in_line][b] == '|')
                count++;
    }

    while (game->in_match == 0 || game->in_match > count\
    || game->in_match > game->match)
        game->in_match = random() % (count + 1);
    my_printf("AI removed %d match(es) from line %d\n", \
    game->in_match, game->in_line);

    remove_matches(game);
    display_map(game);
    game->turn = 1;
}

int take_input(stick_t *game)
{
    char *str = NULL;
    size_t size = 10;
    game->in_line = 0;

    my_putstr("Line: ");
    if (getline(&str, &size, stdin) == -1) return (-1);
    if (!verify_input(game, str)) return (0);
    game->in_line = my_atoi(str);
    if (!check_error_l(game)) return (0);

    free(str);
    return (take_inputtwo(game));
}

int take_inputtwo(stick_t *game)
{
    char *matches = NULL;
    size_t size = 10;
    game->in_match = 0;

    my_putstr("Matches: ");
    if (getline(&matches, &size, stdin) == -1) return (-1);
    if (!verify_input(game, matches)) return (0);
    game->in_match = my_atoi(matches);
    if (!check_error_m(game)) return (0);

    if (check_line(game)) return (0);
    else
        display_map(game);
    game->state = 1;
    game->turn = 2;

    free(matches);
    return (0);
}

int matchstick(stick_t *game)
{
    game->board = malloc(sizeof(char *) * (game->line + 2));
    game->column = 3;
    game->state = 1;
    game->turn = 1;
    create_map(game);
    while (game->match_max) {
        if (game->turn) {
            if (game->state)
                my_putstr("\nYour turn:\n");
            if (take_input(game) == -1) return (-1);
        }
        if (game->turn == 2 && game->match_max != 0) {
            my_putstr("\nAI's turn...\n");
            play_ai(game);
        } }
    if (game->turn == 1)
        my_printf("I lost... snif... but I'll get you next time!!\n");
    if (game->turn == 2)
        my_printf("You lost, too bad...\n");
    return (game->turn);
}