/*
** EPITECH PROJECT, 2019
** my_octal.c
** File description:
** my_octal
*/

#include "my.h"

int my_put_octal(unsigned int nb, int n)
{
    if (nb >= 8)
        n = my_put_octal(nb / 8, n);
    my_putchar(nb % 8 + '0');
    n++;
    return (n);
}

int my_octal(va_list ap, int n, char const *str, int *i)
{
    unsigned int nb = va_arg(ap, unsigned int);

    (void)str[*i];
    return (my_put_octal(nb, n));
}
