/*
** EPITECH PROJECT, 2019
** my_binary.c
** File description:
** put binary
*/

#include "my.h"

int my_put_binary(unsigned int nb, int n)
{
    if (nb >= 2)
        n = my_put_binary(nb / 2, n);
    my_putchar(nb % 2 + '0');
    n++;
    return (n);
}

int my_binary(va_list ap, int n, char const *str, int *i)
{
    unsigned int nb = va_arg(ap, unsigned int);

    (void)str[*i];
    return (my_put_binary(nb, n));
}
