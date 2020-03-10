/*
** EPITECH PROJECT, 2019
** my_print_pointer.c
** File description:
** print pointer
*/

#include "my.h"

int print_pointer(unsigned long long nb, int n)
{
    if (nb == 0) {
        my_putstr("(nil)");
        n += 5;
    } else
        n = my_put_hexa_min_ll(nb, n);
    return (n);
}

int my_print_pointer(va_list ap, int n, char const *str, int *i)
{
    unsigned long long nb = va_arg(ap, unsigned long long);

    (void)str[*i];
    if (nb != 0) {
        my_putstr("0x");
        n += 2;
    }
    return (print_pointer(nb, n));
}
