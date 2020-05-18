/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** click_endgame
*/

#include "proto.h"

void click_end_game(var_t *var, menu_t *menu)
{
    sfFloatRect hitbox1 = sfText_getGlobalBounds(menu->text_retry);
    sfFloatRect hitbox2 = sfText_getGlobalBounds(menu->text_exit);
    int x = sfMouse_getPositionRenderWindow(var->window).x;
    int y = sfMouse_getPositionRenderWindow(var->window).y;
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);

    if (sfFloatRect_contains(&hitbox1, x, y) && click) {
        menu->game = 1;
        var->speed = 1;
        var->count = 0;
        var->result = "0";
        sfText_setString(var->Text_score, var->result);
        sfSprite_setPosition(var->coin, (sfVector2f) {rand()%1100, -150});
    }
    if (sfFloatRect_contains(&hitbox2, x, y) && click) {
        sfRenderWindow_close(var->window);
    }
}
