/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** click_menu
*/

#include "proto.h"

void click_menu(var_t *var, menu_t *menu)
{
    sfFloatRect hitbox = sfRectangleShape_getGlobalBounds(menu->Button_play);
    int x = sfMouse_getPositionRenderWindow(var->window).x;
    int y = sfMouse_getPositionRenderWindow(var->window).y;
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);

    if (sfFloatRect_contains(&hitbox, x, y) && click) {
        menu->game = 1;
    }
}
