/*
** EPITECH PROJECT, 2019
** my_octal_long.c
** File description:
** octal long
*/

#include "my.h"

int my_put_octal_long(unsigned long nb, int n)
{
    if (nb >= 8)
        n = my_put_octal_long(nb / 8, n);
    my_putchar(nb % 8 + '0');
    n++;
    return (n);
}

int my_octal_long(va_list ap, int n, char const *str, int *i)
{
    unsigned long nb = va_arg(ap, unsigned long);

    (void)str[*i];
    return (my_put_octal_long(nb, n));
}
