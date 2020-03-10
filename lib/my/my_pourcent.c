/*
** EPITECH PROJECT, 2019
** my_pourcent.c
** File description:
** put pourcent
*/

#include "my.h"

int my_put_pourcent(va_list ap, int n, char const *str, int *i)
{
    (void)ap;
    (void)str[*i];
    my_putchar('%');
    n++;
    return (n);
}
