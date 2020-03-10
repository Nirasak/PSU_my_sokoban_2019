/*
** EPITECH PROJECT, 2019
** my_putnbr_unsigned_m.c
** File description:
** put nbr unsigned modifier
*/

#include "my.h"

int len_nbr_u(unsigned int nb)
{
    int n = 0;

    if (nb == 0)
        n++;
    for (; nb > 0; n++)
        nb = nb / 10;
    return (n);
}

int my_putnbr_unsigned_m2(int n, int var[3], unsigned int nb)
{
    if (var[0] == 0 && var[1] == 0)
        for (int j = var[2] - len_nbr_u(nb); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    n = my_put_nbr_unsigned(nb, n);
    if (var[0] == 1)
        for (int j = var[2] - len_nbr_u(nb); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    return (n);
}

int my_putnbr_unsigned_m(va_list ap, int n, char const *str, int *i)
{
    unsigned int nb = va_arg(ap, unsigned int);
    int var[3] = {0, 0, 0};

    for (int j = *i; str[j] != 'u'; j++) {
        if (str[j] == '-')
            var[0] = 1;
        if (str[j - 1] < '0' && str[j] == '0')
            var[1] = 1;
        if (str[j] > '0') {
            var[2] = my_getnbr(&str[j]);
            break;
        }
    }
    if (var[0] == 0 && var[1] == 1)
        for (int j = var[2] - len_nbr_u(nb); j > 0; j--) {
            my_putchar('0');
            n++;
        }
    return (my_putnbr_unsigned_m2(n, var, nb));
}
