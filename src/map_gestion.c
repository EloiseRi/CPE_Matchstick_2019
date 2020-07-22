/*
** EPITECH PROJECT, 2020
** map_gestion
** File description:
** map_gestion
*/

#include "matchstick.h"

void put_matches(stick_t *game)
{
    int j = 1;
    int col = game->column;
    game->match_max = 0;

    for (int i = game->line; i != 0; i--) {
        for (int a = j; a < col - 1; a++) {
            game->board[i][a] = '|';
            game->match_max++;
        }
        col--;
        j++;
    }
}

void display_map(stick_t *game)
{
    for (int a = 0; a != game->line + 2; a++)
        my_printf("%s\n", game->board[a]);
}

void create_map(stick_t *game)
{
    int l = game->line;

    for (; l > 1; l--)
        game->column += 2;
    for (int i = 0; i != game->line + 2; i++) {
        game->board[i] = malloc(sizeof(char) * (game->column + 1));
        for (int j = 0; j != game->column; j++) {
            if (i == 0 || i == game->line + 1)
                game->board[i][j] = '*';
            else if (j == 0 || j == game->column - 1)
                game->board[i][j] = '*';
            else
                game->board[i][j] = ' ';
        }
        game->board[i][game->column] = '\0';
    }
    put_matches(game);
    display_map(game);
}

void remove_matches(stick_t *game)
{
    int i = 0, j = game->in_match;

    game->match_max -= game->in_match;
    for (i = game->column - 1; game->board[game->in_line][i] != '|'; i--);
    for (; j != 0; i--, j--)
        game->board[game->in_line][i] = ' ';
}