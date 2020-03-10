/*
** EPITECH PROJECT, 2019
** my_hub_hh.c
** File description:
** hub hh
*/

#include "my.h"

int hub_hh(va_list ap, int n, char const *str, int *i)
{
    int j = 0;
    char check[] = {'d', 'i', 'o', 'u', 'x', 'X', '\0'};
    int (*ptn[])(va_list, int, char const *, int *) = {
        &my_put_hh, &my_put_hh, &my_octal_hh, &my_unsigned_hh,
        &my_hexa_min_hh, &my_hexa_maj_hh};

    for (j = 0; str[*i + 1] != check[j] && j < my_strlen(check); j++);
    if (j < my_strlen(check)) {
        (*i)++;
        n = ptn[j](ap, n, str, i);
    } else {
        my_putchar('%');
        (*i) -= 2;
    }
    return (n);
}
