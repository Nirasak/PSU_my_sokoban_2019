/*
** EPITECH PROJECT, 2019
** my_put_hexa_maj_l.c
** File description:
** put hexa maj l
*/

#include "my.h"

int my_put_hexa_maj_l(unsigned long nb, int n)
{
    if (nb >= 16)
        n = my_put_hexa_maj_l(nb / 16, n);
    if (nb % 16 < 10)
        my_putchar(nb % 16 + '0');
    else
        my_putchar(nb % 16 + 55);
    n++;
    return (n);
}

int my_hexa_maj_l(va_list ap, int n, char const *str, int *i)
{
    unsigned long nb = va_arg(ap, unsigned long);

    (void)str[*i];
    return (my_put_hexa_maj_l(nb, n));
}
