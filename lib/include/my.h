/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>

void redirect_all_std(void);
int my_printf(char const *str, ...);
void my_putchar(char c);
int my_strlen(char *str);
int my_putstr(char const *str);
int my_printchar(va_list ap, int n, char const *str, int *i);
int my_putnbr(va_list ap, int n, char const *str, int *i);
int my_printstr(va_list ap, int n, char const *str, int *i);
int my_putnbr_unsigned(va_list ap, int n, char const *str, int *i);
int my_octal(va_list ap, int n, char const *str, int *i);
int my_put_octal(unsigned int nb, int n);
int my_putmin_hexa(va_list ap, int n, char const *str, int *i);
int my_put_min_hexa(unsigned int nb, int n);
int my_putmaj_hexa(va_list ap, int n, char const *str, int *i);
int my_print_pointer(va_list ap, int n, char const *str, int *i);
int len_puted(va_list ap, int n, char const *str, int *i);
int my_put_invisible_char(va_list ap, int n, char const *str, int *i);
int my_put_pourcent(va_list ap, int n, char const *str, int *i);
int my_binary(va_list ap, int n, char const *str, int *i);
int hub_l(va_list ap, int n, char const *str, int *i);
int my_put_long(va_list ap, int n, char const *str, int *i);
int my_octal_long(va_list ap, int n, char const *str, int *i);
int my_unsigned_long(va_list ap, int n, char const *str, int *i);
int my_hexa_min_l(va_list ap, int n, char const *str, int *i);
int my_hexa_maj_l(va_list ap, int n, char const *str, int *i);
int hub_ll(va_list ap, int n, char const *str, int *i);
int my_octal_ll(va_list ap, int n, char const *str, int *i);
int my_hexa_maj_ll(va_list ap, int n, char const *str, int *i);
int my_hexa_min_ll(va_list ap, int n, char const *str, int *i);
int my_unsigned_ll(va_list ap, int n, char const *str, int *i);
int my_put_ll(va_list ap, int n, char const *str, int *i);
int hub_h(va_list ap, int n, char const *str, int *i);
int my_octal_h(va_list ap, int n, char const *str, int *i);
int my_hexa_maj_h(va_list ap, int n, char const *str, int *i);
int my_hexa_min_h(va_list ap, int n, char const *str, int *i);
int my_unsigned_h(va_list ap, int n, char const *str, int *i);
int my_put_h(va_list ap, int n, char const *str, int *i);
int hub_hh(va_list ap, int n, char const *str, int *i);
int my_octal_hh(va_list ap, int n, char const *str, int *i);
int my_hexa_maj_hh(va_list ap, int n, char const *str, int *i);
int my_hexa_min_hh(va_list ap, int n, char const *str, int *i);
int my_unsigned_hh(va_list ap, int n, char const *str, int *i);
int my_put_hh(va_list ap, int n, char const *str, int *i);
int hub_plus(va_list ap, int n, char const *str, int *i);
int my_plus_putnbr(va_list ap, int n, char const *str, int *i);
int hub_modf(va_list ap, int n, char const *str, int *i);
int my_putnbr_m(va_list ap, int n, char const *str, int *i);
int my_getnbr(char const *str);
int my_put_nbr(int nb, int n);
int my_printchar_m(va_list ap, int n, char const *str, int *i);
int my_printstr_m(va_list ap, int n, char const *str, int *i);
int my_putnbr_unsigned_m(va_list ap, int n, char const *str, int *i);
int my_put_nbr_unsigned(unsigned int nb, int n);
int len_nbr_hexa(unsigned int nb);
int my_put_min_hexa(unsigned int nb, int n);
int my_putmin_hexa_m(va_list ap, int n, char const *str, int *i);
int my_putmaj_hexa_m(va_list ap, int n, char const *str, int *i);
int my_put_maj_hexa(unsigned int nb, int n);
int my_put_octal(unsigned int nb, int n);
int my_octal_m(va_list ap, int n, char const *str, int *i);
int my_put_hexa_min_ll(unsigned long long nb, int n);
int my_print_pointer_m(va_list ap, int n, char const *str, int *i);
int print_pointer(unsigned long long nb, int n);
int my_put_invisible_char_m(va_list ap, int n, char const *str, int *i);
int put_inv_char(char *src, int i, int n);
int my_binary_m(va_list ap, int n, char const *str, int *i);
int my_put_binary(unsigned int nb, int n);

#endif
