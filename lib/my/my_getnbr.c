/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** get nbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    for (; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            sign = -sign;
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        if (nb >= 0)
            nb = nb * 10 + str[i] - 48;
        if (nb < 0)
            nb = nb * 10 - (str[i] - 48);
        if (sign < 0 && nb > 0)
            nb = nb * sign;
    }
    return (nb);
}
