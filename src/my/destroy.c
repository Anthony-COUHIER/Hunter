/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** destroy
*/

#include "proto.h"

void my_destroy(var_t *var, c_t *my_clock, sound_t *sound)
{
    sfRenderWindow_destroy(var->window);
    sfMusic_destroy(sound->sound_g);
    sfSprite_destroy(var->my_cursor);
    sfSprite_destroy(var->background);
    sfSprite_destroy(var->coin);
    sfSprite_destroy(var->mini_coin);
    sfMusic_destroy(sound->sound_coin);
}
