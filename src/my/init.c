/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** init
*/

#include "proto.h"

void init(var_t *var, c_t *my_clock, sound_t *sound, menu_t *menu)
{
    menu->game = 0;
    var->speed = 1;
    my_clock->Clock_anim = sfClock_create();
    my_clock->Clock_score = sfClock_create();
    my_clock->Clock_mouv = sfClock_create();
    var->image_cursor = (sfIntRect) {0, 0, 62, 62};
    var->im_score = (sfIntRect) {0, 0, 50, 50};
    var->rect = (sfIntRect) {0, 0, 84, 84};
    var->count = 0;
    var->result = "0";
}
