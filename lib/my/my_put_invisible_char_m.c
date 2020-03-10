/*
** EPITECH PROJECT, 2019
** my_put_invisible_char_m.c
** File description:
** put invisible char modifier
*/

#include "my.h"

int len_nbr_s(char *str)
{
    int n = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127)
            n += 3;
        n++;
    }
    return (n);
}

int my_put_invisble_char_m2(int n, int var[3], char *src)
{
    if (var[0] == 0 && var[1] == 0)
        for (int j = var[2] - len_nbr_s(src); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    if (var[0] == 0 && var[1] == 1)
        for (int j = var[2] - len_nbr_s(src); j > 0; j--) {
            my_putchar('0');
            n++;
        }
    for (int j = 0; src[j] != '\0'; j++)
        n = put_inv_char(src, j, n);
    if (var[0] == 1)
        for (int j = var[2] - len_nbr_s(src); j > 0; j--) {
            my_putchar(' ');
            n++;
        }
    return (n);
}

int my_put_invisible_char_m(va_list ap, int n, char const *str, int *i)
{
    char *src = va_arg(ap, char *);
    int var[3] = {0, 0, 0};

    for (int j = *i; str[j] != 'S'; j++) {
        if (str[j] == '-')
            var[0] = 1;
        if (str[j - 1] < '0' && str[j] == '0')
            var[1] = 1;
        if (str[j] > '0') {
            var[2] = my_getnbr(&str[j]);
            break;
        }
    }
    return (my_put_invisble_char_m2(n, var, src));
}
