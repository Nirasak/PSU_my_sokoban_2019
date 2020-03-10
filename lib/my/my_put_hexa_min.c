/*
** EPITECH PROJECT, 2019
** my_put_hexa_min.c
** File description:
** put hexa min
*/

#include "my.h"

int my_put_min_hexa(unsigned int nb, int n)
{
    if (nb >= 16)
        n = my_put_min_hexa(nb / 16, n);
    if (nb % 16 < 10)
        my_putchar(nb % 16 + '0');
    else
        my_putchar(nb % 16 + 87);
    n++;
    return (n);
}

int my_putmin_hexa(va_list ap, int n, char const *str, int *i)
{
    unsigned int nb = va_arg(ap, unsigned int);

    (void)str[*i];
    return (my_put_min_hexa(nb, n));
}
