/*
** EPITECH PROJECT, 2019
** my_put_unsigned_long.c
** File description:
** put unsigned long
*/

#include "my.h"

int my_put_unsigned_long(unsigned long nb, int n)
{
    if (nb >= 10)
        n = my_put_unsigned_long(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_unsigned_long(va_list ap, int n, char const *str, int *i)
{
    unsigned long nb = va_arg(ap, unsigned long);

    (void)str[*i];
    return (my_put_unsigned_long(nb, n));
}
