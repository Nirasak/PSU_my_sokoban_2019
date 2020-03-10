/*
** EPITECH PROJECT, 2019
** my_put_hexa_min_ll.c
** File description:
** put hexa min ll
*/

#include "my.h"

int my_put_hexa_min_ll(unsigned long long nb, int n)
{
    if (nb >= 16)
        n = my_put_hexa_min_ll(nb / 16, n);
    if (nb % 16 < 10)
        my_putchar(nb % 16 + '0');
    else
        my_putchar(nb % 16 + 87);
    n++;
    return (n);
}

int my_hexa_min_ll(va_list ap, int n, char const *str, int *i)
{
    unsigned long long nb = va_arg(ap, unsigned long long);

    (void)str[*i];
    return (my_put_hexa_min_ll(nb, n));
}
