/*
** EPITECH PROJECT, 2019
** my_put_h.c
** File description:
** put h
*/

#include "my.h"

int put_h(short nb, int n)
{
    if (nb < 0) {
        my_putchar('-');
        n++;
        if (nb / 2 == -32768) {
            my_putchar('9');
            n++;
            nb = nb + 30000;
        }
        nb = -nb;
    }
    if (nb >= 10)
        n = put_h(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_put_h(va_list ap, int n, char const *str, int *i)
{
    short nb = (short)va_arg(ap, int);

    (void)str[*i];
    return (put_h(nb, n));
}
