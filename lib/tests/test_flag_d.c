/*
** EPITECH PROJECT, 2019
** test_flag_d.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_d_one, .init = redirect_all_std)
{
    my_printf("%d", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, flag_d_two, .init = redirect_all_std)
{
    my_printf("%d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, flag_d_three, .init = redirect_all_std)
{
    my_printf("%+ 10d", 123);
    cr_assert_stdout_eq_str("      +123");
}

Test(my_printf, flag_d_four, .init = redirect_all_std)
{
    my_printf("% +i", 0);
    cr_assert_stdout_eq_str("+0");
}

Test(my_printf, flag_d_five, .init = redirect_all_std)
{
    my_printf("%-010i", 5);
    cr_assert_stdout_eq_str("5          ");
}

Test(my_printf, flag_d_six, .init = redirect_all_std)
{
    my_printf("% i", 5);
    cr_assert_stdout_eq_str(" 5");
}

Test(my_printf, flag_d_seven, .init = redirect_all_std)
{
    my_printf("%010i", 5);
    cr_assert_stdout_eq_str("0000000005");
}

Test(my_printf, flag_d_eight, .init = redirect_all_std)
{
    my_printf("%-10i", 5);
    cr_assert_stdout_eq_str("5         ");
}

Test(my_printf, flag_d_nine, .init = redirect_all_std)
{
    my_printf("%+ d", -123);
    cr_assert_stdout_eq_str("-123");
}

Test(my_printf, flag_d_ten, .init = redirect_all_std)
{
    my_printf("%+0d", 123);
    cr_assert_stdout_eq_str("+123");
}

Test(my_printf, flag_ld_one, .init = redirect_all_std)
{
    my_printf("%ld", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, flag_ld_two, .init = redirect_all_std)
{
    my_printf("%ld", -4611686018427387904 * 2);
    cr_assert_stdout_eq_str("-9223372036854775808");
}

Test(my_printf, flag_li_one, .init = redirect_all_std)
{
    my_printf("%li", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, flag_li_two, .init = redirect_all_std)
{
    my_printf("%li", -9223372036854775804);
    cr_assert_stdout_eq_str("-9223372036854775804");
}

Test(my_printf, flag_lld_one, .init = redirect_all_std)
{
    my_printf("%lld", -9223372036854775804);
    cr_assert_stdout_eq_str("-9223372036854775804");
}

Test(my_printf, flag_lld_two, .init = redirect_all_std)
{
    my_printf("%lld", 9223372036854775804);
    cr_assert_stdout_eq_str("9223372036854775804");
}

Test(my_printf, flag_lli_one, .init = redirect_all_std)
{
    my_printf("%lli", -4611686018427387904 * 2);
    cr_assert_stdout_eq_str("-9223372036854775808");
}

Test(my_printf, flag_hd_one, .init = redirect_all_std)
{
    my_printf("%hd", 804);
    cr_assert_stdout_eq_str("804");
}

Test(my_printf, flag_hd_two, .init = redirect_all_std)
{
    my_printf("%hd", -804);
    cr_assert_stdout_eq_str("-804");
}

Test(my_printf, flag_hhd_one, .init = redirect_all_std)
{
    my_printf("%hhd", -104);
    cr_assert_stdout_eq_str("-104");
}
