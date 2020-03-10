/*
** EPITECH PROJECT, 2019
** add_slashn.c
** File description:
** add_slashn
*/

#include "my.h"

char *add_slashn(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    if (str[i - 1] != '\n') {
        str[i] = '\n';
        str[i + 1] = '\0';
    }
    return (str);
}
