/*
** EPITECH PROJECT, 2022
** B-MUL-200-BDX-2-1-
** File description:
** contructor
*/

#include "hud.h"

bool hud_parser_bool(char *bool_constr)
{
    if (str_start_with(bool_constr, "true", my_strlen(bool_constr), 4) == 1)
        return true;
    return false;
}

char *hud_parser_str(char *str_constr)
{
    return my_strdup(str_constr);
}

int hud_parser_int(char *int_constr)
{
    return my_getnbr(int_constr);
}
