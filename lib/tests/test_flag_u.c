/*
** EPITECH PROJECT, 2019
** test_flag_u.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_u_one, .init = redirect_all_std)
{
    my_printf("%u", 99999);
    cr_assert_stdout_eq_str("99999");
}

Test(my_printf, flag_u_two, .init = redirect_all_std)
{
    my_printf("%+ 12u", 123);
    cr_assert_stdout_eq_str("         123");
}

Test(my_printf, flag_u_three, .init = redirect_all_std)
{
    my_printf("%012u", 123);
    cr_assert_stdout_eq_str("000000000123");
}

Test(my_printf, flag_u_four, .init = redirect_all_std)
{
    my_printf("%-012u", 123);
    cr_assert_stdout_eq_str("123         ");
}

Test(my_printf, flag_u_five, .init = redirect_all_std)
{
    my_printf("%-12u", 123);
    cr_assert_stdout_eq_str("123         ");
}

Test(my_printf, flag_u_six, .init = redirect_all_std)
{
    my_printf("%-u", 0);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, flag_hu_one, .init = redirect_all_std)
{
    my_printf("%hu", 123);
    cr_assert_stdout_eq_str("123");
}

Test(my_printf, flag_hhu_one, .init = redirect_all_std)
{
    my_printf("%hhu", 123);
    cr_assert_stdout_eq_str("123");
}

Test(my_printf, flag_lu_one, .init = redirect_all_std)
{
    my_printf("%lu", 99999);
    cr_assert_stdout_eq_str("99999");
}

Test(my_printf, flag_llu_one, .init = redirect_all_std)
{
    my_printf("%llu", 99999);
    cr_assert_stdout_eq_str("99999");
}
