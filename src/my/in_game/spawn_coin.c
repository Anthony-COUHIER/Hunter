/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** spawn_coin
*/

#include "proto.h"

void spawn_coin(var_t *var, c_t *my_clock, menu_t *menu, sound_t *sound)
{
    int pos_x = sfSprite_getPosition(var->coin).x;
    int pos_y = sfSprite_getPosition(var->coin).y;

    init_clock_mouv(my_clock);
    if (pos_y < 640 && my_clock->second_mouv > 0.01) {
        pos_y += var->speed + 1;
        pos_x += 1;
        sfSprite_setPosition(var->coin, (sfVector2f) {pos_x, pos_y});
        sfRenderWindow_drawSprite(var->window, var->coin, NULL);
        anim(var, my_clock);
        click(var, sound);
        sfClock_restart(my_clock->Clock_mouv);
    } else if (pos_y > 410) {
        sfText_setString(menu->text_score, var->result);
        menu->game = 2;
    }
}
