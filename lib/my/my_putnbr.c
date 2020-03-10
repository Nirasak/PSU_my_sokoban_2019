/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** put nbr
*/

#include "my.h"

int my_put_nbr(int nb, int n)
{
    if (nb < 0) {
        my_putchar('-');
        n++;
        if (nb == -2147483648) {
            my_putchar('2');
            n++;
            nb = nb + 2000000000;
        }
        nb = -nb;
    }
    if (nb >= 10)
        n = my_put_nbr(nb / 10, n);
    my_putchar(nb % 10 + '0');
    n++;
    return (n);
}

int my_putnbr(va_list ap, int n, char const *str, int *i)
{
    int nb = va_arg(ap, int);

    (void)str[*i];
    return (my_put_nbr(nb, n));
}
