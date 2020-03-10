/*
** EPITECH PROJECT, 2019
** my_put_hh.c
** File description:
** put hh
*/

#include "my.h"

int put_hh(char nb, int n)
{
    if (nb < 0) {
        my_putchar('-');
        n++;
        if (nb / 2 == -128) {
            my_putchar('9');
            n++;
            nb = nb + 100;
        }
        nb = -nb;
    }
    if (nb >= 10)
        n = put_hh(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_put_hh(va_list ap, int n, char const *str, int *i)
{
    char nb = (char)va_arg(ap, int);

    (void)str[*i];
    return (put_hh(nb, n));
}
