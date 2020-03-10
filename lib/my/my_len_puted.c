/*
** EPITECH PROJECT, 2019
** my_len_puted.c
** File description:
** len puted
*/

#include "my.h"

int len_puted(va_list ap, int n, char const *str, int *i)
{
    int *nb = va_arg(ap, int *);

    (void)str[*i];
    *nb = n;
    return (0);
}
