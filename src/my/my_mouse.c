/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** my_mouse
*/

#include "proto.h"

void my_mouse(var_t *var)
{
    int x = sfMouse_getPositionRenderWindow(var->window).x - 32;
    int y = sfMouse_getPositionRenderWindow(var->window).y - 32;

    if (sfMouse_isButtonPressed(sfMouseLeft))
        var->image_cursor.left = 70;
    else
        var->image_cursor.left = 0;
    sfSprite_setPosition(var->my_cursor, (sfVector2f) {x, y});
    sfSprite_setTextureRect(var->my_cursor, var->image_cursor);
    sfRenderWindow_drawSprite(var->window, var->my_cursor, NULL);
}
