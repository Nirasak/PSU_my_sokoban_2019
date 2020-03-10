/*
** EPITECH PROJECT, 2019
** test_flag_c.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_c_one, .init = redirect_all_std)
{
    my_printf("%c", 'a');
    cr_assert_stdout_eq_str("a");
}

Test(my_printf, flag_c_two, .init = redirect_all_std)
{
    my_printf("%10c", 'c');
    cr_assert_stdout_eq_str("         c");
}

Test(my_printf, flag_c_three, .init = redirect_all_std)
{
    my_printf("%-10c", 'a');
    cr_assert_stdout_eq_str("a         ");
}

Test(my_printf, flag_c_four, .init = redirect_all_std)
{
    my_printf("%+ -10c", 's');
    cr_assert_stdout_eq_str("s         ");
}

Test(my_printf, flag_c_five, .init = redirect_all_std)
{
    my_printf("%-0c", 'k');
    cr_assert_stdout_eq_str("k");
}
