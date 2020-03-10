/*
** EPITECH PROJECT, 2019
** my_sokoban.c
** File description:
** sokoban
*/

#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void my_move(soko_t *soko, int key)
{
    switch (key) {
    case (KEY_UP):
        move_up(soko);
        break;
    case (KEY_DOWN):
        move_down(soko);
        break;
    case (KEY_RIGHT):
        move_right(soko);
        break;
    case (KEY_LEFT):
        move_left(soko);
        break;
    case (32):
        cpy_tab(soko);
        break;
    }
}

int main_loop(soko_t *soko, int lines, int cols)
{
    int key = 0;
    int win = 0;

    initscr();
    noecho();
    curs_set(false);
    print_map(soko, lines, cols);
    keypad(stdscr, TRUE);
    while (key != 'q' && win == 0) {
        key = getch();
        my_move(soko, key);
        clear();
        refresh();
        win = check_win(soko);
        print_map(soko, lines, cols);
        printw("%d\n", key);
    }
    refresh();
    endwin();
    return (win);
}

bool init_struct(soko_t *soko, char *map)
{
    soko->nb_x = count_char(map, 'X');
    soko->nb_p = count_char(map, 'P');
    soko->nb_o = count_char(map, 'O');
    soko->tab = str_to_tab(map, count_char(map, '\n'));
    soko->save_tab = str_to_tab(map, count_char(map, '\n'));
    if (soko->tab == NULL || soko->save_tab == NULL)
        return (false);
    if (check_error(soko, map) == false) {
        write(2, "Invalid map\n", 12);
        return (false);
    }
    return (true);
}

int my_sokoban(char *file)
{
    soko_t soko;
    char *map = open_file(file);
    int win = 0;

    if (map == NULL)
        return (84);
    add_slashn(map);
    if (init_struct(&soko, map) == false)
        return (84);
    win = main_loop(&soko, count_char(map, '\n'), count_cols(soko.tab));
    if (win == -1)
        return (1);
    return (0);
}
