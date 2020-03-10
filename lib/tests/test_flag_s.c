/*
** EPITECH PROJECT, 2019
** test_flag_s.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_s_one, .init = redirect_all_std)
{
    my_printf("%s", "it works");
    cr_assert_stdout_eq_str("it works");
}

Test(my_printf, flag_s_two, .init = redirect_all_std)
{
    my_printf("%10s", "it works");
    cr_assert_stdout_eq_str("  it works");
}

Test(my_printf, flag_s_three, .init = redirect_all_std)
{
    my_printf("%-10s", "it works");
    cr_assert_stdout_eq_str("it works  ");
}

Test(my_printf, flag_s_four, .init = redirect_all_std)
{
    my_printf("%+ -10s", "it works");
    cr_assert_stdout_eq_str("it works  ");
}

Test(my_printf, flag_s_five, .init = redirect_all_std)
{
    my_printf("%-0s", "it works");
    cr_assert_stdout_eq_str("it works");
}
