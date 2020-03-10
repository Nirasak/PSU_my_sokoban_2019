/*
** EPITECH PROJECT, 2019
** my_put_unsigned_int.c
** File description:
** put_unsigned_int
*/

#include "my.h"

int my_put_nbr_unsigned(unsigned int nb, int n)
{
    if (nb >= 10)
        n = my_put_nbr_unsigned(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_putnbr_unsigned(va_list ap, int n, char const *str, int *i)
{
    unsigned int nb = va_arg(ap, unsigned int);

    (void)str[*i];
    return (my_put_nbr_unsigned(nb, n));
}
