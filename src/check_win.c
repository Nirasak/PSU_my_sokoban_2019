/*
** EPITECH PROJECT, 2019
** check_win.c
** File description:
** check win
*/

#include <stddef.h>
#include "my.h"

bool check_char(soko_t *soko, int i, int j)
{
    if (j > 0 && i > 0
        && (soko->tab[j - 1][i] == '#' || soko->tab[j - 1][i] == 'X')
        && (soko->tab[j][i - 1] == '#' || soko->tab[j][i - 1] == 'X'))
        return (true);
    if (j > 0
        && (soko->tab[j - 1][i] == '#' || soko->tab[j - 1][i] == 'X')
        && (soko->tab[j][i + 1] == '#' || soko->tab[j][i + 1] == 'X'))
        return (true);
    if (i > 0 && soko->tab[j + 1] != NULL
        && (soko->tab[j + 1][i] == '#' || soko->tab[j + 1][i] == 'X')
        && (soko->tab[j][i - 1] == '#' || soko->tab[j][i - 1] == 'X'))
        return (true);
    if (soko->tab[j + 1] != NULL
        && (soko->tab[j + 1][i] == '#' || soko->tab[j + 1][i] == 'X')
        && (soko->tab[j][i + 1] == '#' || soko->tab[j][i + 1] == 'X'))
        return (true);
    return (false);
}

bool check_line_lose(soko_t *soko, int j, int *lose)
{
    int i = 0;
    bool value = false;

    for (int check = 0; soko->tab[j][i] != '\0'; i++) {
        if (soko->tab[j][i] == 'X' && check_char(soko, i, j) == true)
            check = 1;
        if (soko->tab[j][i] == 'X')
            value = true;
        if (check == 1)
            (*lose)--;
        check = 0;
    }
    return (value);
}

int check_lose(soko_t *soko)
{
    int j = 0;
    int lose = soko->nb_x;

    for (int check_x = 0; check_x < soko->nb_x; check_x++) {
        while (
            soko->tab[j] != NULL
            && check_line_lose(soko, j, &lose) == false)
            j++;
        if (soko->tab[j] != NULL)
            j++;
    }
    if (lose == 0)
        return (-1);
    return (0);
}

bool check_line_win(soko_t *soko, int j, int *win)
{
    int i = 0;
    bool value = false;

    for (; soko->save_tab[j][i] != '\0'; i++) {
        if (soko->save_tab[j][i] == 'O' && soko->tab[j][i] == 'X')
            (*win)--;
        if (soko->save_tab[j][i] == 'O' && soko->tab[j][i] == ' ')
            soko->tab[j][i] = 'O';
        if (soko->save_tab[j][i] == 'O')
            value = true;
    }
    return (value);
}

int check_win(soko_t *soko)
{
    int j = 0;
    int win = soko->nb_o;

    for (int check_o = 0; check_o < soko->nb_o
            && soko->save_tab[j] != NULL; check_o++) {
        while (
            soko->save_tab[j] != NULL
            && check_line_win(soko, j, &win) == false)
            j++;
        if (soko->save_tab[j] != NULL)
            j++;
    }
    if (win == 0)
        return (1);
    return (check_lose(soko));
}
