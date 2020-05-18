/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** end_game
*/

#include "proto.h"

void end_game(var_t *var, menu_t *menu)
{
    click_end_game(var, menu);
    sfRenderWindow_drawSprite(var->window, menu->background_menu, NULL);
    sfRenderWindow_drawSprite(var->window, menu->coin, NULL);
    sfRenderWindow_drawText(var->window, menu->text_retry, NULL);
    sfRenderWindow_drawText(var->window, menu->text_exit, NULL);
    sfRenderWindow_drawText(var->window, menu->text_lose, NULL);
    sfRenderWindow_drawText(var->window, menu->text_score, NULL);
}
