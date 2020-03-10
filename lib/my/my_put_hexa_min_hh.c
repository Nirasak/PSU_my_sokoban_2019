/*
** EPITECH PROJECT, 2019
** my_put_hexa_min_hh.c
** File description:
** put hexa min hh
*/

#include "my.h"

int my_put_hexa_min_hh(unsigned char nb, int n)
{
    if (nb >= 16)
        n = my_put_hexa_min_hh(nb / 16, n);
    if (nb % 16 < 10)
        my_putchar(nb % 16 + '0');
    else
        my_putchar(nb % 16 + 87);
    n++;
    return (n);
}

int my_hexa_min_hh(va_list ap, int n, char const *str, int *i)
{
    unsigned char nb = (unsigned char)va_arg(ap, int);

    (void)str[*i];
    return (my_put_hexa_min_hh(nb, n));
}
