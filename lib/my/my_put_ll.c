/*
** EPITECH PROJECT, 2019
** my_put_ll.c
** File description:
** put ll
*/

#include "my.h"

int put_ll(long long nb, int n)
{
    if (nb < 0) {
        my_putchar('-');
        n++;
        if (nb / 2 == -4611686018427387904) {
            my_putchar('9');
            n++;
            nb = nb + 9000000000000000000;
        }
        nb = -nb;
    }
    if (nb >= 10)
        n = put_ll(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_put_ll(va_list ap, int n, char const *str, int *i)
{
    long long nb = va_arg(ap, long long);

    (void)str[*i];
    return (put_ll(nb, n));
}
