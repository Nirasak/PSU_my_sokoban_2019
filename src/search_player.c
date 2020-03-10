/*
** EPITECH PROJECT, 2019
** search_player.c
** File description:
** search player
*/

#include <stddef.h>
#include "my.h"

void search_player(soko_t *soko, vector2i_t *pos_p)
{
    int j = 0;
    int i = 0;

    for (; soko->tab[j] != NULL; j++) {
        for (i = 0; soko->tab[j][i] != '\0' && soko->tab[j][i] != 'P'; i++);
        if (soko->tab[j][i] == 'P')
            break;
    }
    pos_p->y = j;
    pos_p->x = i;
}
