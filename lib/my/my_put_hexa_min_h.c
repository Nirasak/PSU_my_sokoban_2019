/*
** EPITECH PROJECT, 2019
** my_put_hexa_min_h.c
** File description:
** put hexa min h
*/

#include "my.h"

int my_put_hexa_min_h(unsigned short nb, int n)
{
    if (nb >= 16)
        n = my_put_hexa_min_h(nb / 16, n);
    if (nb % 16 < 10)
        my_putchar(nb % 16 + '0');
    else
        my_putchar(nb % 16 + 87);
    n++;
    return (n);
}

int my_hexa_min_h(va_list ap, int n, char const *str, int *i)
{
    unsigned short nb = (unsigned short)va_arg(ap, int);

    (void)str[*i];
    return (my_put_hexa_min_h(nb, n));
}
