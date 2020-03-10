/*
** EPITECH PROJECT, 2019
** my_octal_ll.c
** File description:
** put octal ll
*/

#include "my.h"

int my_put_octal_ll(unsigned long long nb, int n)
{
    if (nb >= 8)
        n = my_put_octal_ll(nb / 8, n);
    my_putchar(nb % 8 + '0');
    n++;
    return (n);
}

int my_octal_ll(va_list ap, int n, char const *str, int *i)
{
    unsigned long long nb = va_arg(ap, unsigned long long);

    (void)str[*i];
    return (my_put_octal_ll(nb, n));
}
