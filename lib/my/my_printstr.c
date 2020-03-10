/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** put str
*/

#include "my.h"

int my_printstr(va_list ap, int n, char const *str, int *i)
{
    char *src = va_arg(ap, char *);

    (void)str[*i];
    for (int i = 0; src[i] != '\0'; i++) {
        my_putchar(src[i]);
        n++;
    }
    return (n);
}
