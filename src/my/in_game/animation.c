/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** animation
*/

#include "proto.h"

void anim(var_t *var, c_t *my_clock)
{
    init_clock_anim(my_clock);
    if (my_clock->second_anim > 0.25) {
        if (var->rect.left >= 400)
            var->rect.left = 0;
        else
            var->rect.left += 84;
        sfClock_restart(my_clock->Clock_anim);
        sfSprite_setTextureRect(var->coin, var->rect);
    }
    sfRenderWindow_drawSprite(var->window, var->coin, NULL);
}
