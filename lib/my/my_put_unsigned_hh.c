/*
** EPITECH PROJECT, 2019
** my_put_unsigned_hh.c
** File description:
** put unsigned hh
*/

#include "my.h"

int my_put_unsigned_hh(unsigned char nb, int n)
{
    if (nb >= 10)
        n = my_put_unsigned_hh(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_unsigned_hh(va_list ap, int n, char const *str, int *i)
{
    unsigned char nb = (unsigned char)va_arg(ap, int);

    (void)str[*i];
    return (my_put_unsigned_hh(nb, n));
}
