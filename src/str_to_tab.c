/*
** EPITECH PROJECT, 2019
** str_to_tab.c
** File description:
** str to tab
*/

#include <stdlib.h>
#include "my.h"

int strline(char *str)
{
    int i = 0;

    for (; str[i] != '\n' && str[i] != '\0'; i++);
    return (i);
}

char **str_to_tab(char *str, int size)
{
    int linesize = 0;
    char **tab = malloc(sizeof(char *) * (size + 1));
    int x = 0;

    if (tab == NULL)
        return (NULL);
    for (int i = 0; i < size; i++) {
        linesize = strline(&str[x]);
        tab[i] = malloc(sizeof(char) * linesize + 1);
        if (tab[i] == NULL)
            return (NULL);
        for (int j = 0; j < linesize; j++) {
            tab[i][j] = str[x];
            x++;
        }
        x++;
        tab[i][linesize] = '\0';
    }
    tab[size] = NULL;
    return (tab);
}
