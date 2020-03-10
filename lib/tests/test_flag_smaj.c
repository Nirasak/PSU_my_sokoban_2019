/*
** EPITECH PROJECT, 2019
** test_flag_smaj.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_smaj_one, .init = redirect_all_std)
{
    char str[] = {1, 2, 3, 12, 14, 30, 49, 127, 0};

    my_printf("%S", str);
    cr_assert_stdout_eq_str("\\001\\002\\003\\014\\016\\0361\\177");
}

Test(my_printf, flag_smaj_two, .init = redirect_all_std)
{
    char src[] = {'t', 6, 't', 'o', 0};

    my_printf("%-12S", src);
    cr_assert_stdout_eq_str("t\\006to     ");
}

Test(my_printf, flag_smaj_three, .init = redirect_all_std)
{
    char src[] = {'t', 14, 't', 'o', 0};

    my_printf("%012S", src);
    cr_assert_stdout_eq_str("00000t\\016to");
}

Test(my_printf, flag_smaj_four, .init = redirect_all_std)
{
    char src[] = {'t', 127, 't', 'o', 0};

    my_printf("%-012S", src);
    cr_assert_stdout_eq_str("t\\177to     ");
}

Test(my_printf, flag_smaj_five, .init = redirect_all_std)
{
    char src[] = {'t', 127, 't', 'o', 0};

    my_printf("%12S", src);
    cr_assert_stdout_eq_str("     t\\177to");
}

Test(my_printf, flag_smaj_six, .init = redirect_all_std)
{
    char src[] = {'t', 7, 't', 'o', 0};

    my_printf("%-S", src);
    cr_assert_stdout_eq_str("t\\007to");
}
