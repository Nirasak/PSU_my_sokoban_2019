/*
** EPITECH PROJECT, 2019
** test_flag_p.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_p_one, .init = redirect_all_std)
{
    int i = 0;

    cr_assert_eq(my_printf("%p", i), 0);
    cr_assert_eq(my_printf("%p", &i), 0);
    cr_assert_eq(my_printf("%-p", i), 0);
    cr_assert_eq(my_printf("%-p", &i), 0);
    cr_assert_eq(my_printf("%1234p", i), 0);
    cr_assert_eq(my_printf("%1234p", &i), 0);
    cr_assert_eq(my_printf("%-1234p", i), 0);
    cr_assert_eq(my_printf("%-1234p", &i), 0);
    cr_assert_eq(my_printf("%-01234p", i), 0);
    cr_assert_eq(my_printf("%-01234p", &i), 0);
    cr_assert_eq(my_printf("%01234p", i), 0);
    cr_assert_eq(my_printf("%01234p", &i), 0);
}
