/*
** EPITECH PROJECT, 2019
** my_print_pointer_m.c
** File description:
** print pointer modifier
*/

#include "my.h"

int len_nbr_p(unsigned long long nb)
{
    int n = 2;

    if (nb == 0)
        n++;
    for (; nb > 0; n++)
        nb = nb / 16;
    return (n);
}

int my_print_pointer_m3(int n, int var[3], int stock)
{
    if (var[0] == 1)
        for (int j = var[2] - stock; j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    return (n);
}

int my_print_pointer_m2(int n, int var[3], unsigned long long nb)
{
    int stock = len_nbr_p(nb);

    if (nb == 0)
        stock = 5;
    if (var[0] == 0 && (var[1] == 0 || nb == 0))
        for (int j = var[2] - stock; j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    if (nb != 0) {
        my_putstr("0x");
        n += 2;
    }
    if (var[0] == 0 && var[1] == 1 && nb != 0)
        for (int j = var[2] - stock; j > 0; j--) {
            my_putchar('0');
            n++;
        }
    n = print_pointer(nb, n);
    return (my_print_pointer_m3(n, var, stock));
}

int my_print_pointer_m(va_list ap, int n, char const *str, int *i)
{
    unsigned long long nb = va_arg(ap, unsigned long long);
    int var[3] = {0, 0, 0};

    for (int j = *i; str[j] != 'p'; j++) {
        if (str[j] == '-')
            var[0] = 1;
        if (str[j - 1] < '0' && str[j] == '0')
            var[1] = 1;
        if (str[j] > '0') {
            var[2] = my_getnbr(&str[j]);
            break;
        }
    }
    return (my_print_pointer_m2(n, var, nb));
}
