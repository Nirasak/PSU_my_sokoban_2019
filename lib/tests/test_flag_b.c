/*
** EPITECH PROJECT, 2019
** test_flag_b.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_b_one, .init = redirect_all_std)
{
    my_printf("%b", 99999);
    cr_assert_stdout_eq_str("11000011010011111");
}

Test(my_printf, flag_b_two, .init = redirect_all_std)
{
    my_printf("%10b", 2);
    cr_assert_stdout_eq_str("        10");
}

Test(my_printf, flag_b_three, .init = redirect_all_std)
{
    my_printf("%-10b", 2);
    cr_assert_stdout_eq_str("10        ");
}

Test(my_printf, flag_b_four, .init = redirect_all_std)
{
    my_printf("%-010b", 2);
    cr_assert_stdout_eq_str("10        ");
}

Test(my_printf, flag_b_five, .init = redirect_all_std)
{
    my_printf("%010b", 3);
    cr_assert_stdout_eq_str("0000000011");
}

Test(my_printf, flag_b_six, .init = redirect_all_std)
{
    my_printf("%-b", 0);
    cr_assert_stdout_eq_str("0");
}
