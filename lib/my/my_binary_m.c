/*
** EPITECH PROJECT, 2019
** my_binary_m.c
** File description:
** binary modifier
*/

#include "my.h"

int len_nbr_b(unsigned int nb)
{
    int n = 0;

    if (nb == 0)
        n++;
    for (; nb > 0; n++)
        nb = nb / 2;
    return (n);
}

int my_binary_m2(int n, int var[3], unsigned int nb)
{
    if (var[0] == 0 && var[1] == 0)
        for (int j = var[2] - len_nbr_b(nb); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    if (var[0] == 0 && var[1] == 1)
        for (int j = var[2] - len_nbr_b(nb); j > 0; j--) {
            my_putchar('0');
            n++;
        }
    n = my_put_binary(nb, n);
    if (var[0] == 1)
        for (int j = var[2] - len_nbr_b(nb); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    return (n);
}

int my_binary_m(va_list ap, int n, char const *str, int *i)
{
    unsigned int nb = va_arg(ap, unsigned int);
    int var[3] = {0, 0, 0};

    for (int j = *i; str[j] != 'b'; j++) {
        if (str[j] == '-')
            var[0] = 1;
        if (str[j - 1] < '0' && str[j] == '0')
            var[1] = 1;
        if (str[j] > '0') {
            var[2] = my_getnbr(&str[j]);
            break;
        }
    }
    return (my_binary_m2(n, var, nb));
}
