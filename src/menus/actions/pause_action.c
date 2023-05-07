/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** pause_action
*/

#include "draw.h"
#include "actions.h"

void launch_menu(hud_button_t *button __attribute__((unused)), void *param)
{
    ((game_t *)param)->status = MAIN_MENU;
    ((game_t *)param)->all_spt.player->pos = ((sfVector2f){240, 1020});
}

void launch_pause(hud_button_t *button __attribute__((unused)), void *param)
{
    ((game_t *)param)->status = PAUSE_MENU;
}
