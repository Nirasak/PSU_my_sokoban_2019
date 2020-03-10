/*
** EPITECH PROJECT, 2019
** open_file.c
** File description:
** open file
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *open_file(char *file)
{
    struct stat sb;
    int fd = open(file, O_RDONLY);
    int size = 0;
    char *str = NULL;

    if (fd == -1 || stat(file, &sb) == -1)
        return (NULL);
    size = sb.st_size;
    str = malloc(sizeof(char) * (size + 2));
    if (str == NULL)
        return (NULL);
    if (read(fd, str, size) == -1)
        return (NULL);
    str[size] = '\0';
    close(fd);
    return (str);
}
