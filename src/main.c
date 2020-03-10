/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "my.h"

int print_descr(char *executable)
{
    my_printf(
        "USAGE\n     %s map\nDESCRIPTION\n"
        "     map  file representing the warehouse map"
        ", containing '#' for walls,\n\t  'P' for the player, "
        "'X' for boxes and 'O' for storage locations.\n", executable);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return (print_descr(av[0]));
    return (my_sokoban(av[1]));
}
