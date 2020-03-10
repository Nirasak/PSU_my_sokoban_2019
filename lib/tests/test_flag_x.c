/*
** EPITECH PROJECT, 2019
** test_flag_x.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_x_one, .init = redirect_all_std)
{
    my_printf("%x", 99999);
    cr_assert_stdout_eq_str("1869f");
}

Test(my_printf, flag_x_two, .init = redirect_all_std)
{
    my_printf("%-#012x", 99999);
    cr_assert_stdout_eq_str("0x1869f     ");
}

Test(my_printf, flag_x_three, .init = redirect_all_std)
{
    my_printf("%#012x", 99999);
    cr_assert_stdout_eq_str("0x000001869f");
}

Test(my_printf, flag_x_four, .init = redirect_all_std)
{
    my_printf("%#12x", 99999);
    cr_assert_stdout_eq_str("     0x1869f");
}

Test(my_printf, flag_x_five, .init = redirect_all_std)
{
    my_printf("%#-12x", 99999);
    cr_assert_stdout_eq_str("0x1869f     ");
}

Test(my_printf, flag_x_six, .init = redirect_all_std)
{
    my_printf("%#x", 0);
    cr_assert_stdout_eq_str("0x0");
}

Test(my_printf, flag_x_seven, .init = redirect_all_std)
{
    my_printf("%#-x", 15);
    cr_assert_stdout_eq_str("0xf");
}

Test(my_printf, flag_x_eight, .init = redirect_all_std)
{
    my_printf("%# x", 99999);
    cr_assert_stdout_eq_str("0x1869f");
}

Test(my_printf, flag_hx_one, .init = redirect_all_std)
{
    my_printf("%hx", 123);
    cr_assert_stdout_eq_str("7b");
}

Test(my_printf, flag_hhx_one, .init = redirect_all_std)
{
    my_printf("%hhx", 123);
    cr_assert_stdout_eq_str("7b");
}

Test(my_printf, flag_lx_one, .init = redirect_all_std)
{
    my_printf("%lx", 99999);
    cr_assert_stdout_eq_str("1869f");
}

Test(my_printf, flag_llx_one, .init = redirect_all_std)
{
    my_printf("%llx", 99999);
    cr_assert_stdout_eq_str("1869f");
}
