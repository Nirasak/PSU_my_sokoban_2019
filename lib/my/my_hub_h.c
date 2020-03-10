/*
** EPITECH PROJECT, 2019
** my_hub_h.c
** File description:
** hub h
*/

#include "my.h"

int hub_h(va_list ap, int n, char const *str, int *i)
{
    int j = 0;
    char check[] = {'d', 'i', 'o', 'u', 'x', 'X', 'h', '\0'};
    int (*ptn[])(va_list, int, char const *, int *) = {
        &my_put_h, &my_put_h, &my_octal_h, &my_unsigned_h,
        &my_hexa_min_h, &my_hexa_maj_h, &hub_hh};

    for (j = 0; str[*i + 1] != check[j] && j < my_strlen(check); j++);
    if (j < my_strlen(check)) {
        (*i)++;
        n = ptn[j](ap, n, str, i);
    } else {
        my_putchar('%');
        (*i)--;
    }
    return (n);
}
