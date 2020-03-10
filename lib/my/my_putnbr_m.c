/*
** EPITECH PROJECT, 2019
** my_putnbr_m.c
** File description:
** put nbr m
*/

#include "my.h"

int len_nbr(int nb)
{
    int n = 0;

    if (nb <= 0) {
        n++;
        nb = -nb;
    }
    for (; nb > 0; n++)
        nb = nb / 10;
    return (n);
}

int my_putnbr_m3(int stock_n, int n, int var[5])
{
    if (var[3] == 1)
        for (int j = stock_n - n + var[4]; j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    return (n);
}

int my_putnbr_m2(int stock_n, int n, int var[5], int nb)
{
    if (var[0] == 1 || var[1] == 1)
        n++;
    if (var[2] == 0 && var[3] == 0)
        for (int j = stock_n - n + var[4] - len_nbr(nb); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    if (var[0] == 1)
        my_putchar('+');
    if (var[2] == 1 && var[3] == 0)
        for (int j = stock_n - n + var[4] - len_nbr(nb); j > 0; j--) {
            my_putchar('0');
            n++;
        }
    if (var[1] == 1 && var[0] == 0)
        my_putchar(' ');
    n = my_put_nbr(nb, n);
    return (my_putnbr_m3(stock_n, n, var));
}

int my_putnbr_m(va_list ap, int n, char const *str, int *i)
{
    int stock_n = n;
    int nb = va_arg(ap, int);
    int var[5] = {0, 0, 0, 0, 0};

    for (int j = *i; str[j] != 'd' && str[j] != 'i'; j++) {
        if (str[j] == '+' && nb >= 0)
            var[0] = 1;
        if (str[j] == ' ' && nb >= 0)
            var[1] = 1;
        if (str[j - 1] < '0' && str[j] == '0')
            var[2] = 1;
        if (str[j] == '-')
            var[3] = 1;
        if (str[j] > '0') {
            var[4] = my_getnbr(&str[j]);
            break;
        }
    }
    return (my_putnbr_m2(stock_n, n, var, nb));
}
