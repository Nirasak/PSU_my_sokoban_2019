/*
** EPITECH PROJECT, 2019
** my_octal_hh.c
** File description:
** octal hh
*/

#include "my.h"

int my_put_octal_hh(unsigned char nb, int n)
{
    if (nb >= 8)
        n = my_put_octal_hh(nb / 8, n);
    my_putchar(nb % 8 + '0');
    n++;
    return (n);
}

int my_octal_hh(va_list ap, int n, char const *str, int *i)
{
    unsigned char nb = (unsigned char)va_arg(ap, int);

    (void)str[*i];
    return (my_put_octal_hh(nb, n));
}
