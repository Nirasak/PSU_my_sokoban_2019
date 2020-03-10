/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdbool.h>

typedef struct soko
{
    int nb_x;
    int nb_p;
    int nb_o;
    char **tab;
    char **save_tab;
} soko_t;

typedef struct vector2i
{
    int x;
    int y;
} vector2i_t;

int my_sokoban(char *file);
int my_strcmp(char const *s1, char const *s2);
int my_printf(char const *str, ...);
char *open_file(char *file);
int count_char(char *str, char to_find);
void print_map(soko_t *soko, int lines, int cols);
char *add_slashn(char *str);
void move_up(soko_t *soko);
void move_down(soko_t *soko);
void move_right(soko_t *soko);
void move_left(soko_t *soko);
void cpy_tab(soko_t *soko);
char **str_to_tab(char *str, int size);
int count_cols(char **tab);
void search_player(soko_t *soko, vector2i_t *pos_p);
bool check_error(soko_t *soko, char *map);
int check_win(soko_t *soko);
bool init_struct(soko_t *soko, char *map);
void my_move(soko_t *soko, int key);

#endif
