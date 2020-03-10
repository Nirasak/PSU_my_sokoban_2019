/*
** EPITECH PROJECT, 2019
** my_put_unsigned_ll.c
** File description:
** put unsigned ll
*/

#include "my.h"

int my_put_unsigned_ll(unsigned long nb, int n)
{
    if (nb >= 10)
        n = my_put_unsigned_ll(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_unsigned_ll(va_list ap, int n, char const *str, int *i)
{
    unsigned long long nb = va_arg(ap, unsigned long long);

    (void)str[*i];
    return (my_put_unsigned_ll(nb, n));
}
