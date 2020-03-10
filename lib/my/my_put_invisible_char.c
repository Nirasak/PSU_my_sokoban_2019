/*
** EPITECH PROJECT, 2019
** my_put_invisible_char.c
** File description:
** put invisible_char
*/

#include "my.h"

int put_inv_char(char *src, int i, int n)
{
    if (src[i] > 32 && src[i] != 127) {
        my_putchar(src[i]);
        n++;
    } else {
        my_putchar(92);
        n++;
        if (src[i] < 10) {
            my_putstr("00");
            n += 2;
        } else if (src[i] != 127) {
            my_putchar('0');
            n++;
        }
        n = my_put_octal(src[i], n);
    }
    return (n);
}

int my_put_invisible_char(va_list ap, int n, char const *str, int *i)
{
    char *src = va_arg(ap, char *);

    (void)str[*i];
    for (int j = 0; src[j] != 0; j++)
        n = put_inv_char(src, j, n);
    return (n);
}
