/*
** EPITECH PROJECT, 2019
** my_hub_modf.c
** File description:
** hub modf
*/

#include "my.h"

int check_syntax(char const *str, int *i, char c)
{
    char check[] = {'#', '+', '-', ' ', '0', '1', '2', '3', '4', '5',
                    '6', '7', '8', '9', '\0'};
    int j = *i;
    int x = 0;
    int save_x = x;

    for (; str[j] != c; j++) {
        for (x = 0; str[j] != check[x]; x++);
        if (save_x > 4 && x < 4)
            return (-1);
        save_x = x;
    }
    return (0);
}

char check_flag(char const *str, int *i)
{
    int x = 0;
    int j = *i;
    char flag[] = {'c', 'd', 'i', 's', 'o', 'u', 'x', 'X', 'p', 'S',
                    'b', '%', '\0'};
    char check[] = {'#', '+', '-', ' ', '0', '1', '2', '3', '4', '5',
                    '6', '7', '8', '9', '\0'};
    char c = 0;

    for (; str[j] != '\0'; j++) {
        for (x = 0; str[j] != check[x] && check[x] != '\0'; x++);
        if (check[x] == '\0')
            break;
    }
    c = str[j];
    for (x = 0; c != flag[x] && flag[x] != '\0'; x++);
    c = flag[x];
    return (c);
}

int hub_modf(va_list ap, int n, char const *str, int *i)
{
    char flag[] = {'c', 'd', 'i', 's', 'o', 'u', 'x', 'X', 'p',
                    'S', 'b', '%', '\0'};
    int (*ptn[])(va_list, int, char const *, int *) = {
        &my_printchar_m, &my_putnbr_m, &my_putnbr_m, &my_printstr_m,
        &my_octal_m, &my_putnbr_unsigned_m, &my_putmin_hexa_m,
        &my_putmaj_hexa_m, &my_print_pointer_m, &my_put_invisible_char_m,
        &my_binary_m, &my_put_pourcent};
    char c = check_flag(str, i);
    int j = 0;

    if (c == 0 || check_syntax(str, i, c) == -1) {
        my_putchar('%');
        (*i)--;
        return (n);
    }
    for (; c != flag[j]; j++);
    n = ptn[j](ap, n, str, i);
    for (; str[*i] != c; (*i)++);
    return (n);
}
