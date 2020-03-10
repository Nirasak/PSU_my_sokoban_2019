/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** my putchar
*/

#include <unistd.h>
#include "my.h"

int my_printchar(va_list ap, int n, char const *str, int *i)
{
    char c = (char)va_arg(ap, int);

    (void)str[*i];
    write(1, &c, 1);
    n++;
    return (n);
}
