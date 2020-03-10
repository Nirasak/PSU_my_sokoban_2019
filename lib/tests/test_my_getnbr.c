/*
** EPITECH PROJECT, 2019
** test_my_getnbr.c
** File description:
** test getnbr
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_getnbr, test_one)
{
    cr_assert_eq(my_getnbr("++--+58 "), 58);
}

Test(my_getnbr, test_two)
{
    cr_assert_eq(my_getnbr("++---+58 "), -58);
}
