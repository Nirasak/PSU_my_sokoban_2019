/*
** EPITECH PROJECT, 2019
** print_map.c
** File description:
** print map
*/

#include <ncurses.h>
#include "my.h"

void print_map(soko_t *soko, int lines, int cols)
{
    if (LINES >= lines && COLS >= cols)
        for (int i = 0; soko->tab[i] != NULL; i++)
            mvprintw(
                LINES / 2 - lines / 2 + i, COLS / 2 - cols / 2, soko->tab[i]);
    else
        mvprintw(LINES / 2, COLS / 2 - 4, "too small");
}
