/*
** EPITECH PROJECT, 2019
** test_flag_xmaj.c
** File description:
** test printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flag_xmaj_one, .init = redirect_all_std)
{
    my_printf("%X", 99999);
    cr_assert_stdout_eq_str("1869F");
}

Test(my_printf, flag_xmah_two, .init = redirect_all_std)
{
    my_printf("%-#012X", 99999);
    cr_assert_stdout_eq_str("0x1869F     ");
}

Test(my_printf, flag_xmaj_three, .init = redirect_all_std)
{
    my_printf("%#012X", 99999);
    cr_assert_stdout_eq_str("0x000001869F");
}

Test(my_printf, flag_xmaj_four, .init = redirect_all_std)
{
    my_printf("%#12X", 99999);
    cr_assert_stdout_eq_str("     0x1869F");
}

Test(my_printf, flag_xmaj_five, .init = redirect_all_std)
{
    my_printf("%#-12X", 99999);
    cr_assert_stdout_eq_str("0x1869F     ");
}

Test(my_printf, flag_xmaj_six, .init = redirect_all_std)
{
    my_printf("%#X", 0);
    cr_assert_stdout_eq_str("0x0");
}

Test(my_printf, flag_xmaj_seven, .init = redirect_all_std)
{
    my_printf("%#-X", 15);
    cr_assert_stdout_eq_str("0xF");
}

Test(my_printf, flag_xmaj_eight, .init = redirect_all_std)
{
    my_printf("%# X", 99999);
    cr_assert_stdout_eq_str("0x1869F");
}

Test(my_printf, flag_hxmaj_one, .init = redirect_all_std)
{
    my_printf("%hX", 123);
    cr_assert_stdout_eq_str("7B");
}

Test(my_printf, flag_hhxmaj_one, .init = redirect_all_std)
{
    my_printf("%hhX", 123);
    cr_assert_stdout_eq_str("7B");
}

Test(my_printf, flag_lxmaj_one, .init = redirect_all_std)
{
    my_printf("%lX", 99999);
    cr_assert_stdout_eq_str("1869F");
}

Test(my_printf, flag_llxmaj_one, .init = redirect_all_std)
{
    my_printf("%llX", 99999);
    cr_assert_stdout_eq_str("1869F");
}
