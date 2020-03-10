/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"

void loop(
    char const *str, va_list ap, char *check,
    int (**ptn)(va_list, int, char const *, int *))
{
    int j = 0;
    int n = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '%') {
            my_putchar(str[i]);
            n++;
        }
        if (str[i] == '%') {
            for (j = 0; str[i + 1] != check[j] && j < my_strlen(check); j++);
            if (j < my_strlen(check)) {
                i++;
                n = ptn[j](ap, n, str, &i);
            }
        }
        if (str[i] == '%' && j >= my_strlen(check)) {
            my_putchar(str[i]);
            n++;
        }
    }
}

int my_printf(char const *str, ...)
{
    va_list ap;
    char check[] = {'c', 'd', 'i', 's', 'o', 'u', 'x', 'X', 'p', 'n', 'S',
                    '%', 'b', 'l', 'h', 'q', '#', '+', '-', ' ', '0', '1',
                    '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    int (*ptn[])(va_list, int, char const *, int *) = {
        &my_printchar, &my_putnbr, &my_putnbr, &my_printstr, &my_octal,
        &my_putnbr_unsigned, &my_putmin_hexa, &my_putmaj_hexa,
        &my_print_pointer, &len_puted, &my_put_invisible_char,
        &my_put_pourcent, &my_binary, &hub_l, &hub_h, &hub_ll, &hub_modf,
        &hub_modf, &hub_modf, &hub_modf, &hub_modf, &hub_modf, &hub_modf,
        &hub_modf, &hub_modf, &hub_modf, &hub_modf, &hub_modf, &hub_modf,
        &hub_modf};

    va_start(ap, str);
    loop(str, ap, check, ptn);
    va_end(ap);
    return (0);
}
