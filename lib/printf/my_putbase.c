/*
** EPITECH PROJECT, 2021
** RPG
** File description:
** my_putbase
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putbase(int nbr, char const *base)
{
    int base_len = my_strlen(base);

    if (nbr / my_strlen(base) > 0)
        my_putbase(nbr / base_len, base);
    write(1, &base[nbr % base_len], 1);
}
