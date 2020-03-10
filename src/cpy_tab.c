/*
** EPITECH PROJECT, 2019
** cpy_tab.c
** File description:
** cpy tab
*/

#include <stddef.h>
#include "my.h"

void cpy_tab(soko_t *soko)
{
    for (int j = 0; soko->save_tab[j] != NULL; j++)
        for (int i = 0; soko->save_tab[j][i] != '\0'; i++)
            soko->tab[j][i] = soko->save_tab[j][i];
}
