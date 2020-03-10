/*
** EPITECH PROJECT, 2019
** my_octal_h.c
** File description:
** octal h
*/

#include "my.h"

int my_put_octal_h(unsigned short nb, int n)
{
    if (nb >= 8)
        n = my_put_octal_h(nb / 8, n);
    my_putchar(nb % 8 + '0');
    n++;
    return (n);
}

int my_octal_h(va_list ap, int n, char const *str, int *i)
{
    unsigned short nb = (unsigned short)va_arg(ap, int);

    (void)str[*i];
    return (my_put_octal_h(nb, n));
}
