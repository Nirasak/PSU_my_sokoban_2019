/*
** EPITECH PROJECT, 2019
** my_printstr_m.c
** File description:
** printstr modifier
*/

#include "my.h"

int my_printstr_m2(int var[2], int n, char *src)
{
    if (var[0] == 1)
        for (int j = var[1] - my_strlen(src); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    return (n);
}

int my_printstr_m(va_list ap, int n, char const *str, int *i)
{
    char *src = va_arg(ap, char *);
    int var[2] = {0, 0};

    for (int j = *i; str[j] != 's'; j++) {
        if (str[j] == '-')
            var[0] = 1;
        if (str[j] > '0') {
            var[1] = my_getnbr(&str[j]);
            break;
        }
    }
    if (var[0] == 0)
        for (int j = var[1] - my_strlen(src); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    my_putstr(src);
    n = n + my_strlen(src);
    return (my_printstr_m2(var, n, src));
}
