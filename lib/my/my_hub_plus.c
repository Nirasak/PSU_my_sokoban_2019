/*
** EPITECH PROJECT, 2019
** my_hub_diez.c
** File description:
** hub diez
*/

#include "my.h"

int hub_plus(va_list ap, int n, char const *str, int *i)
{
    int j = 0;
    char check[] = {'d', 'i', 'o', 'u', 'x', 'X', '\0'};
    int (*ptn[])(va_list, int, char const *, int *) = {
        &my_plus_putnbr, &my_plus_putnbr, &my_octal, my_putnbr_unsigned,
        &my_putmin_hexa, &my_putmaj_hexa};

    for (j = 0; str[*i + 1] != check[j] && j < my_strlen(check); j++);
    if (j < my_strlen(check)) {
        (*i)++;
        n = ptn[j](ap, n, str, i);
    }
    return (n);
}
