/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** score_anim
*/

#include "proto.h"

void score_anim(var_t *var, c_t *my_clock)
{
    init_clock_score(my_clock);
    if (my_clock->second_score > 0.15) {
        if (var->im_score.left >= 250)
            var->im_score.left = 0;
        else
            var->im_score.left += 50;
        sfClock_restart(my_clock->Clock_score);
        sfSprite_setTextureRect(var->mini_coin, var->im_score);
    }
    sfRenderWindow_drawSprite(var->window, var->mini_coin, NULL);
}
