/*
** EPITECH PROJECT, 2019
** test_my_printf.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, flag_i_two, .init = redirect_all_std)
{
    my_printf("%i", -2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}

Test(my_printf, flag_n_one)
{
    int i = 0;

    my_printf("hihi%n", &i);
    cr_assert_eq(i, 4);
}

Test(my_printf, flag_pourcent_one, .init = redirect_all_std)
{
    my_printf("%%%%%");
    cr_assert_stdout_eq_str("%%%");
}

Test(my_printf, fake_flag_one, .init = redirect_all_std)
{
    my_printf("%w");
    cr_assert_stdout_eq_str("%w");
}

Test(my_printf, fake_flag_two, .init = redirect_all_std)
{
    my_printf("%#10w");
    cr_assert_stdout_eq_str("%#10w");
}

Test(my_printf, fake_flag_three, .init = redirect_all_std)
{
    my_printf("%#12+-d");
    cr_assert_stdout_eq_str("%#12+-d");
}

Test(my_printf, fake_flag_four, .init = redirect_all_std)
{
    my_printf("%#+-12");
    cr_assert_stdout_eq_str("%#+-12d");
}

Test(my_printf, fake_flag_five, .init = redirect_all_std)
{
    my_printf("%lw");
    cr_assert_stdout_eq_str("%lw");
}

Test(my_printf, fake_flag_six, .init = redirect_all_std)
{
    my_printf("%llw");
    cr_assert_stdout_eq_str("%llw");
}

Test(my_printf, fake_flag_seven, .init = redirect_all_std)
{
    my_printf("%hw");
    cr_assert_stdout_eq_str("%hw");
}

Test(my_printf, fake_flag_eight, .init = redirect_all_std)
{
    my_printf("%hhw");
    cr_assert_stdout_eq_str("%hhw");
}
