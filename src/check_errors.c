/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** check_errors
*/

#include "draw.h"
#include "my.h"

int is_env_correct(char **env)
{
    int exists = 0;

    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(env[i], "DISPLAY=", 8) == 0) {
            exists = 1;
        }
    }
    return exists;
}
