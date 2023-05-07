/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** big_values
*/

#include "hud.h"

void hud_parser_view_get_other(hud_t *hud __attribute__ ((unused)),
hud_view_t *view, char **keys)
{
    char *key = NULL;

    if ((key = hud_parser_get_key(keys, "texture=")) != NULL) {
        view->texture = hud_texture_set(key);
        free(key);
    }
}
