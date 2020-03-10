/*
** EPITECH PROJECT, 2019
** move.c
** File description:
** move
*/

#include <stddef.h>
#include "my.h"

void move_up(soko_t *soko)
{
    vector2i_t pos_p;
    char check;

    search_player(soko, &pos_p);
    if (pos_p.y == 0)
        return;
    check = soko->tab[pos_p.y - 1][pos_p.x];
    if (check == 'O' || check == ' ') {
        soko->tab[pos_p.y - 1][pos_p.x] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
    else if (pos_p.y > 1 && check == 'X'
            && (soko->tab[pos_p.y - 2][pos_p.x] == ' '
                || soko->tab[pos_p.y - 2][pos_p.x] == 'O')) {
        soko->tab[pos_p.y - 2][pos_p.x] = 'X';
        soko->tab[pos_p.y - 1][pos_p.x] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
}

void move_down(soko_t *soko)
{
    vector2i_t pos_p;
    char check;

    search_player(soko, &pos_p);
    if (soko->tab[pos_p.y + 1] == NULL)
        return;
    check = soko->tab[pos_p.y + 1][pos_p.x];
    if ((soko->tab[pos_p.y + 1] != NULL)
        && (check == 'O' || check == ' ')) {
        soko->tab[pos_p.y + 1][pos_p.x] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
    else if ((soko->tab[pos_p.y + 1] != NULL)
            && (soko->tab[pos_p.y + 2] != NULL)
            && check == 'X' && (soko->tab[pos_p.y + 2][pos_p.x] == ' '
                || soko->tab[pos_p.y + 2][pos_p.x] == 'O')) {
        soko->tab[pos_p.y + 2][pos_p.x] = 'X';
        soko->tab[pos_p.y + 1][pos_p.x] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
}

void move_right(soko_t *soko)
{
    vector2i_t pos_p;
    char check;

    search_player(soko, &pos_p);
    check = soko->tab[pos_p.y][pos_p.x + 1];
    if ((soko->tab[pos_p.y][pos_p.x + 1] != '\0')
        && (check == 'O' || check == ' ')) {
        soko->tab[pos_p.y][pos_p.x + 1] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
    else if ((soko->tab[pos_p.y][pos_p.x + 1] != '\0')
            && (soko->tab[pos_p.y][pos_p.x + 2] != '\0')
            && check == 'X'
            && (soko->tab[pos_p.y][pos_p.x + 2] == ' '
                || soko->tab[pos_p.y][pos_p.x + 2] == 'O')) {
        soko->tab[pos_p.y][pos_p.x + 2] = 'X';
        soko->tab[pos_p.y][pos_p.x + 1] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
}

void move_left(soko_t *soko)
{
    vector2i_t pos_p;
    char check;

    search_player(soko, &pos_p);
    check = soko->tab[pos_p.y][pos_p.x - 1];
    if (pos_p.x > 0 && (check == 'O' || check == ' ')) {
        soko->tab[pos_p.y][pos_p.x - 1] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
    else if (pos_p.x > 1 && check == 'X'
            && (soko->tab[pos_p.y][pos_p.x - 2] == ' '
                || soko->tab[pos_p.y][pos_p.x - 2] == 'O')) {
        soko->tab[pos_p.y][pos_p.x - 2] = 'X';
        soko->tab[pos_p.y][pos_p.x - 1] = 'P';
        soko->tab[pos_p.y][pos_p.x] = ' ';
    }
}
