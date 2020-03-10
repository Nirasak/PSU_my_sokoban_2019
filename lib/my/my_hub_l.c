/*
** EPITECH PROJECT, 2019
** my_hub_l.c
** File description:
** hub_l
*/

#include "my.h"

int hub_l(va_list ap, int n, char const *str, int *i)
{
    int j = 0;
    char check[] = {'d', 'i', 'o', 'u', 'x', 'X', 'l', '\0'};
    int (*ptn[])(va_list, int, char const *, int *) = {
        &my_put_long, &my_put_long, &my_octal_long, &my_unsigned_long,
        &my_hexa_min_l, &my_hexa_maj_l, &hub_ll};

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
