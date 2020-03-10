/*
** EPITECH PROJECT, 2019
** my_put_hexa_maj.c
** File description:
** put hexa maj
*/

#include "my.h"

int my_put_maj_hexa(unsigned int nb, int n)
{
    if (nb >= 16)
        n = my_put_maj_hexa(nb / 16, n);
    if (nb % 16 < 10)
        my_putchar(nb % 16 + '0');
    else
        my_putchar(nb % 16 + 55);
    n++;
    return (n);
}

int my_putmaj_hexa(va_list ap, int n, char const *str, int *i)
{
    unsigned int nb = va_arg(ap, unsigned int);

    (void)str[*i];
    return (my_put_maj_hexa(nb, n));
}
