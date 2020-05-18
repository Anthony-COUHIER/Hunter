/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** my_menu
*/

#include "proto.h"

void my_menu(var_t *var, menu_t *menu)
{
    sfRenderWindow_drawSprite(var->window, menu->background_menu, NULL);
    sfRenderWindow_drawRectangleShape(var->window, menu->Button_play, NULL);
    click_menu(var, menu);
    sfRenderWindow_drawRectangleShape(var->window, menu->back_how, NULL);
    sfRenderWindow_drawSprite(var->window, menu->play, NULL);
    sfRenderWindow_drawText(var->window, menu->text_play, NULL);
    sfRenderWindow_drawText(var->window, menu->How_playing, NULL);
    sfRenderWindow_drawText(var->window, menu->My_hunter, NULL);
    sfRenderWindow_drawText(var->window, menu->Playing, NULL);
}
