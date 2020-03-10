/*
** EPITECH PROJECT, 2019
** my_print_char_m.c
** File description:
** printchar modifier
*/

#include "my.h"

int my_printchar_m2(int var[2], int n)
{
    if (var[0] == 1)
        for (int j = var[1] - 1; j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    return (n);
}

int my_printchar_m(va_list ap, int n, char const *str, int *i)
{
    int var[2] = {0, 0};

    for (int j = *i; str[j] != 'c'; j++) {
        if (str[j] == '-')
            var[0] = 1;
        if (str[j] > '0') {
            var[1] = my_getnbr(&str[j]);
            break;
        }
    }
    if (var[0] == 0)
        for (int j = var[1] - 1; j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    n = my_printchar(ap, n, str, i);
    return (my_printchar_m2(var, n));
}
