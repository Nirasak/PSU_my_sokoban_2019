/*
** EPITECH PROJECT, 2019
** my_put_unsigned_h.c
** File description:
** put unsigned h
*/

#include "my.h"

int my_put_unsigned_h(unsigned short nb, int n)
{
    if (nb >= 10)
        n = my_put_unsigned_h(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_unsigned_h(va_list ap, int n, char const *str, int *i)
{
    unsigned short nb = (unsigned short)va_arg(ap, int);

    (void)str[*i];
    return (my_put_unsigned_h(nb, n));
}
