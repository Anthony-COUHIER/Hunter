/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** in_back
*/

#include "proto.h"

void in_back(var_t *var, c_t *my_clock)
{
    sfRenderWindow_drawSprite(var->window, var->background, NULL);
    score(var, my_clock);
}
