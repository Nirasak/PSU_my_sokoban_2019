/*
** EPITECH PROJECT, 2019
** check_error.c
** File description:
** check error
*/

#include "my.h"

bool check_error(soko_t *soko, char *map)
{
    if (soko->nb_x <= 0 || soko->nb_x < soko->nb_o)
        return (false);
    if (soko->nb_o <= 0)
        return (false);
    if (soko->nb_p != 1)
        return (0);
    for (int i = 0; map[i] != '\0'; i++)
        if (map[i] != '\n' && map[i] != ' ' && map[i] != '#'
            && map[i] != 'O' && map[i] != 'P' && map[i] != 'X')
            return (false);
    return (true);
}
