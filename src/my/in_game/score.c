/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** score
*/

#include "proto.h"

void score(var_t *var, c_t *my_clock)
{
    score_anim(var, my_clock);
    sfRenderWindow_drawText(var->window, var->Text_score, NULL);
}
