/*
** EPITECH PROJECT, 2019
** test_my_sokoban.c
** File description:
** test sokoban
*/

#include <criterion/criterion.h>
#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

char *my_strcpy(char const *src, char *dest)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char const *src)
{
    int i = 0;
    char *dest = NULL;

    while (src[i] != '\0')
        i++;
    dest = malloc(sizeof(char) * i);
    if (dest == NULL)
        return (NULL);
    dest = my_strcpy(src, dest);
    return (dest);
}

Test(open_file, Test_one)
{
    char *str = "src/open_file.c";
    char *map = open_file(str);

    cr_assert_str_neq(map, "NULL");
}

Test(str_to_tab, Test_one)
{
    char *str = "Bonjour\nCeci\nEst\nUn\nTest";
    char **tab = str_to_tab(str, 5);

    cr_assert_str_eq(tab[0], "Bonjour");
    cr_assert_str_eq(tab[1], "Ceci");
    cr_assert_str_eq(tab[2], "Est");
    cr_assert_str_eq(tab[3], "Un");
    cr_assert_str_eq(tab[4], "Test");
}

Test(add_slashn, Test_one)
{
    char *str = malloc(sizeof(char) * 10);
    char *str2 = my_strdup("Bonjour\n");

    str = my_strcpy("Bonjour", str);
    str = add_slashn(str);
    str2 = add_slashn(str2);
    cr_assert_str_eq(str, "Bonjour\n");
    cr_assert_str_eq(str2, "Bonjour\n");
}

Test(check_error, Test_one)
{
    char *map = open_file("tests/map1");
    soko_t soko;

    cr_assert_eq(init_struct(&soko, map), 1);
}

Test(check_error, Test_two)
{
    char *map = open_file("tests/map_error1");
    soko_t soko;

    cr_assert_eq(init_struct(&soko, map), 0);
}

Test(check_error, Test_three)
{
    char *map = open_file("tests/map_error2");
    soko_t soko;

    cr_assert_eq(init_struct(&soko, map), 0);
}

Test(check_error, Test_four)
{
    char *map = open_file("tests/map_error3");
    soko_t soko;

    cr_assert_eq(init_struct(&soko, map), 0);
}

Test(check_error, Test_five)
{
    char *map = open_file("tests/map_error4");
    soko_t soko;

    cr_assert_eq(init_struct(&soko, map), 0);
}

Test(check_error, Test_six)
{
    char *map = open_file("tests/map_error5");
    soko_t soko;

    cr_assert_eq(init_struct(&soko, map), 0);
}

Test(check_lose, Test_one)
{
    char *map = open_file("tests/map_lose1");
    soko_t soko;

    init_struct(&soko, map);
    cr_assert_eq(check_win(&soko), 0);
}

Test(check_lose, Test_two)
{
    char *map = open_file("tests/map_lose2");
    soko_t soko;

    init_struct(&soko, map);
    cr_assert_eq(check_win(&soko), 0);
}

Test(check_lose, Test_three)
{
    char *map = open_file("tests/map_lose3");
    soko_t soko;

    init_struct(&soko, map);
    cr_assert_eq(check_win(&soko), -1);
}

Test(check_win, Test_one)
{
    char *map = open_file("tests/map1");
    soko_t soko;

    init_struct(&soko, map);
    cr_assert_eq(check_win(&soko), 0);
}

Test(check_win, Test_two)
{
    char *save_map = open_file("tests/map_lose1");
    char *map = open_file("tests/map_win1");
    soko_t soko;

    init_struct(&soko, save_map);
    soko.tab = str_to_tab(map, count_char(map, '\n'));
    cr_assert_eq(check_win(&soko), 1);
}

Test(check_win, Test_three)
{
    char *save_map = open_file("tests/map_lose1");
    char *map = open_file("tests/map_win2");
    soko_t soko;

    init_struct(&soko, save_map);
    soko.tab = str_to_tab(map, count_char(map, '\n'));
    cr_assert_eq(check_win(&soko), 0);
}

Test(count_cols, Test_one)
{
    char *map = open_file("tests/map_lose3");
    soko_t soko;

    init_struct(&soko, map);
    cr_assert_eq(count_cols(soko.tab), 6);
}

Test(cpy_tab, Test_one)
{
    char *map = open_file("tests/map_lose3");
    soko_t soko;

    init_struct(&soko, map);
    cpy_tab(&soko);
    cr_assert_eq(my_strcmp(soko.tab[0], soko.save_tab[0]), 0);
}

Test(move, Test_one)
{
    soko_t soko;
    int key = KEY_UP;

    init_struct(&soko, open_file("tests/map1"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map2"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map3"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map4"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map5"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map6"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map7"));
    my_move(&soko, key);
}

Test(move, Test_two)
{
    soko_t soko;
    int key = KEY_DOWN;

    init_struct(&soko, open_file("tests/map1"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map2"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map3"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map4"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map5"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map6"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map7"));
    my_move(&soko, key);
}

Test(move, Test_three)
{
    soko_t soko;
    int key = KEY_RIGHT;

    init_struct(&soko, open_file("tests/map1"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map2"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map3"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map4"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map5"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map6"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map7"));
    my_move(&soko, key);
}

Test(move, Test_four)
{
    soko_t soko;
    int key = KEY_DOWN;

    init_struct(&soko, open_file("tests/map1"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map2"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map3"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map4"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map5"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map6"));
    my_move(&soko, key);
    init_struct(&soko, open_file("tests/map7"));
    my_move(&soko, key);
}
