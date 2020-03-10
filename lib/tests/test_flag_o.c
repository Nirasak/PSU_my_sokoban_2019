/*
** EPITECH PROJECT, 2019
** test_flag_o.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_o_one, .init = redirect_all_std)
{
    my_printf("%o", 123456);
    cr_assert_stdout_eq_str("361100");
}

Test(my_printf, flag_o_two, .init = redirect_all_std)
{
    my_printf("%# 12o", 123);
    cr_assert_stdout_eq_str("        0173");
}

Test(my_printf, flag_o_three, .init = redirect_all_std)
{
    my_printf("%#o", 0);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, flag_o_four, .init = redirect_all_std)
{
    my_printf("%-#012o", 5);
    cr_assert_stdout_eq_str("05          ");
}

Test(my_printf, flag_o_five, .init = redirect_all_std)
{
    my_printf("%-12o", 5);
    cr_assert_stdout_eq_str("5           ");
}

Test(my_printf, flag_o_six, .init = redirect_all_std)
{
    my_printf("%#012o", 5);
    cr_assert_stdout_eq_str("000000000005");
}

Test(my_printf, flag_ho_one, .init = redirect_all_std)
{
    my_printf("%ho", 10);
    cr_assert_stdout_eq_str("12");
}

Test(my_printf, flag_hho_one, .init = redirect_all_std)
{
    my_printf("%hho", 10);
    cr_assert_stdout_eq_str("12");
}

Test(my_printf, flag_lo_one, .init = redirect_all_std)
{
    my_printf("%lo", 10);
    cr_assert_stdout_eq_str("12");
}

Test(my_printf, flag_llo_one, .init = redirect_all_std)
{
    my_printf("%llo", 10);
    cr_assert_stdout_eq_str("12");
}
