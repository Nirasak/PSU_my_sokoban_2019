/*
** EPITECH PROJECT, 2019
** count_char.c
** File description:
** count char
*/

#include <stddef.h>
#include "my.h"

int count_cols(char **tab)
{
    int cols = 0;
    int stock_cols = 0;

    for (int j = 0; tab[j] != NULL; j++) {
        for (int i = 0; tab[j][i] != '\0'; i++)
            cols++;
        if (cols > stock_cols)
            stock_cols = cols;
        cols = 0;
    }
    return (stock_cols);
}

int count_char(char *str, char to_find)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find)
            count++;
    }
    return (count);
}
